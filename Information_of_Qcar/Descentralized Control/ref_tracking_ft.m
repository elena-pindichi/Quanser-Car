clc, clear all, close all;

% Load CasADi
import casadi.*;

%% Parameters
N_pred_val = 25;     % Prediction horizon
Q_val = 1000;         % State weight value
R_val = 1;           % Input weight value
P_val = 1000;         % Terminal state value

% Define prediction and simulation steps
Te = 0.1;                           % Sampling time
Npred = N_pred_val;                 % Prediction horizon
Nsim = 300;                         % Number of simulation steps

% Physical parameters
r = 33e-3;           % Radius of wheels
L = 160e-3;          % Distance between wheels

% Define system dimensions
dx = 3;              % State dimensions: x, y, theta
du = 2;              % Control dimensions: V, omega

% Initial condition
x0 = [0.3; 0.2; 0];  % Initial state [x; y; theta]
u0 = zeros(du, 1);

% Constraints on wheel angular velocities
Vmin = -10; Vmax = 10;           % Velocity limits
omegamin = -10; omegamax = 10;   % Angular velocity limits
xmin = -1 * 0.2 * ones(3, 1);    % State limits
xmax =  1 * 0.2 * ones(3, 1); 

% Weights for cost function
Q = Q_val * eye(dx);
Q = diag([1000, 1000, 1]);
R = R_val * eye(du);
P = P_val * Q;

xref = [1.488e-06 ...
        0.9 ...
        0]';

%% CasADi nonlinear optimization
solver = casadi.Opti();

% Define optimization variables
x = solver.variable(dx, Npred + 1);
u = solver.variable(du, Npred);    

% Define initial state as a parameter
xinit = solver.parameter(dx, 1);
uinit = solver.parameter(du, 1);

% Nonlinear dynamics
f_dynamics = @(x, u) [ u(1) * cos(x(3));
                       u(1) * sin(x(3));
                       u(2)];

% Add initial state constraint
solver.subject_to(x(:, 1) == xinit);

% Add constraints and dynamics for each prediction step
for k = 1 : Npred
    solver.subject_to(x(:, k+1) == x(:, k) + Te * f_dynamics(x(:, k), u(:, k)));
    solver.subject_to(xmin <= x(:, k + 1) - x(:, k) <= xmax)
    
    % Control input constraints
    solver.subject_to(Vmin <= u(1, k) <= Vmax);
    solver.subject_to(omegamin <= u(2, k) <= omegamax);
end

% Initialize objective
objective = 0;
for k = 1 : Npred
    objective = objective + (x(:, k) - xref)' * Q * (x(:, k) - xref) + u(:, k)' * R * u(:, k);
end

objective = objective + (x(:, Npred + 1) - xref)' * P * (x(:, Npred + 1) - xref);
solver.minimize(objective)

%% Define the objective function
% Define the solver
options.ipopt.print_level = 0;
options.ipopt.sb= 'yes';
options.print_time = 0;
solver.solver('ipopt', options)

% simulation loop
usim = zeros(du, Nsim);
xsim = zeros(dx, Nsim);
xsim(:, 1) = x0;
usim_init = u0;

for i = 1 : Nsim
    solver.set_value(xinit, xsim(:, i))
    solver.set_value(uinit, usim_init)
    sol = solver.solve();
    usol = sol.value(u);
    usim(:, i) = usol(:, 1);
    xsim(:, i + 1) = xsim(:, i) + Te * f_dynamics(xsim(:, i), usim(:, i));
end

%% Plot results
figure
stem(xsim(1, :));
hold on
stem(xsim(2, :));
grid

figure
stem(usim(1, :))
hold on
stem(usim(2, :));
grid
title('Input u');
legend ('u1', 'u2');
% hold on
% plot(xref(1, 1:Nsim))
% hold on
% plot(xref(2, 1:Nsim))
% grid