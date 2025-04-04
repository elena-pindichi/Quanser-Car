clc, clear all, close all;
import casadi.*;

%% Parameters
N_robots = 1;
N_pred_val = 25;
Q_val = 1000;  
R_val = 1;    
P_val = 1000; 
Te = 0.1;     
d_min = 0.3;
Nsim = 300;

% Initialize states and references
dx = 3; 
du = 2; 
x0 = [0.3; 0.2; 0];  
u0 = zeros(du, 1);
xref_all = cell(1, N_robots);

% Load references for all robots
for i = 1:N_robots
    load('ref.mat', 'xi_ref', 'u_ref');
    xref_all{i} = xi_ref;
end

xref = xi_ref;

% Weights for cost function
% Q = Q_val * eye(dx);
Q = diag([100, 100, 0.0001]);
R = R_val * eye(du);
P = P_val * Q;
Npred = N_pred_val;

%% CasADi Optimization Setup
solver = casadi.Opti();
x = solver.variable(dx, N_pred_val + 1);
u = solver.variable(du, N_pred_val);     
xinit = solver.parameter(dx, N_robots);           

% Nonlinear dynamics
f_dynamics = @(x, u) [u(1) * cos(x(3));
                      u(1) * sin(x(3));
                      u(2)];

%% Define the objective function
% Define the solver
options.ipopt.print_level = 0;
options.ipopt.sb= 'yes';
options.print_time = 0;

% simulation loop
usim = zeros(du, Nsim);
xsim = zeros(dx, Nsim);
xsim(:, 1) = x0;
usim_init = u0;

% % Define objectives and constraints
% objective = 0;

for j = 1:N_robots
    for i = 1 : Nsim
    objective = 0;
        for k = 1 : Npred
            if k ~= 1
                objective = objective + (x(:, k) - xref(:, i + k - 1))' * Q * (x(:, k) - xref(:, i + k - 1)) ...
                                                                            + (u(:, k) - u(:, k - 1))' * ...
                                                                            R * (u(:, k) - u(:, k - 1));
            else
                objective = objective + (x(:, k) - xref(:, i + k - 1))' * Q * (x(:, k) - xref(:, i + k - 1)) ...
                                                                            + u(:, k)' * R * u(:, k);
            end
        end
    
        objective = objective + (x(:, Npred + 1) - xref(:, i + Npred-1))' * P * (x(:, Npred + 1) ...
                                                                            - xref(:, i + Npred-1));
        solver.minimize(objective)
        solver.solver('ipopt', options)
        solver.set_value(xinit, xsim(:, i))
        sol = solver.solve();
        usol = sol.value(u);
        usim(:, i) = usol(:, 1);
        xsim(:, i + 1) = xsim(:, i) + Te * f_dynamics(xsim(:, i), usim(:, i));

    end
end

solver.minimize(objective);

%% Solver Options
options.ipopt.print_level = 0;
options.ipopt.sb = 'yes';
options.print_time = 0;
solver.solver('ipopt', options);

%% Simulation Loop
xsim = zeros(dx, N_pred_val + 1);
usim = zeros(du, N_pred_val);

% for t = 1:N_sim
%     % Update initial conditions
%     for i = 1:N_robots
%         solver.set_value(xinit(:, i), xsim(:, i, t));
%     end
%     sol = solver.solve();
%     for i = 1:N_robots
%         usim(:, i, t) = sol.value(u(:, 1, i));
%         xsim(:, i, t+1) = xsim(:, i, t) + Te * f_dynamics(xsim(:, i, t), usim(:, i, t));
%     end
% end
