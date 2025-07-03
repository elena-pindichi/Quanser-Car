clc, close all, clear all;
import casadi.*;

A_ob = [1 1; 1 -1; -1 -1; -1 1];
b_ob = [1; 1; 1; 1];
O = Polyhedron(A_ob, b_ob);

mu = 0.5;

A = [1 0 mu 0; 0 1 0 mu; 0 0 1 0; 0 0 0 1];
B = [0 0; 0 0; mu 0; 0 mu]; 
C = [1 0 0 0; 0 1 0 0];
D = zeros(2);

[dx, du] = size(B);
dy = size(C, 1);

u0 = zeros(du, 1);
x0 = [-2; 0.2; 0; 0];
xref = [5; 0.6; 0; 0];

umin = -1 * 0.25;
umax =  1 * 0.25;
delta_umin = -1 * 0.1;
delta_umax =  1 * 0.1;

Npred = 5;
Q = 1 * eye(dx);
R = 1;
P = 10 * Q;
Nsim = 50 / 0.5;

solver = casadi.Opti();

%% Define variables
x = solver.variable(dx, Npred + 1);
u = solver.variable(du, Npred);
alpha = solver.variable(4, Npred + 1);
xinit = solver.parameter(dx, 1);
uinit = solver.parameter(du, 1);

H = A_ob;
b = b_ob + 0.15 * ones(4, 1);
% b = b_ob;
M = 10^5;

%% Initialize constraints
solver.subject_to(x(:, 1) == xinit)
for k = 1 : Npred
    solver.subject_to(x(:, k + 1) == A * x(:, k) + B * u(:, k))
    solver.subject_to(umin <= u(:, k) <= umax)
    % solver.subject_to(ymin <= C * x(:, k) + D * u(:, k) <= ymax)
    solver.subject_to(-H * x(1:2, k+1) <= -b + M * alpha(:, k+1))
    solver.subject_to(sum(alpha(:, k+1)) <= 3)
    if k == 1
        solver.subject_to(delta_umin <= u(:, k) - uinit <= delta_umax);
    else
        solver.subject_to(delta_umin <= u(:, k) - u(:, k - 1) <= delta_umax)
    end
end


%% Initialize objective
objective = 0;
for k = 1 : Npred
    objective = objective + (x(:, k) - xref)' * Q * (x(:, k) - xref) + u(:, k)' * R * u(:, k);
end

objective = objective + (x(:, Npred + 1) - xref)' * P * (x(:, Npred + 1) - xref);
solver.minimize(objective)

%% Define the solver
% options.ipopt.print_level = 0;
% options.ipopt.sb= 'yes';
% options.print_time = 0;
% solver.solver('ipopt', options)
x_ = reshape(zeros(dx, Npred + 1), 1, []);
u_ = reshape(zeros(du, Npred), 1, []);
alpha_ = reshape(ones(4, Npred + 1), 1, []);
option.discrete = [x_, u_, alpha_];
solver.solver('bonmin', option);

%% simulation loop
usim = zeros(du, Nsim);
ysim = zeros(dy, Nsim);
xsim = zeros(dx, Nsim);
xsim(:, 1) = x0;
usim_init = u0;

x_fin = [];

for i = 1 : Nsim
    solver.set_value(xinit, xsim(:, i))
    solver.set_value(uinit, usim_init)
    sol = solver.solve();
    usol = sol.value(u);
    usim_init = usol(:, 1);
    usim(:, i) = usol(:, 1);
    xsim(:, i + 1) = A * xsim(:, i) + B * usim(:, i);
    ysim(:, i) = C * xsim(:, i) + D * usim(:, i);

    % aux = sol.value(x);
    % x_fin = [x_fin, aux(:, end)];

end

figure
scatter(xsim(1, :), xsim(2, :))
grid
title('State space');
xlabel 'x1'
ylabel 'x2'
hold on
plot(O)

% solver = casadi.Opti();
% 
% % Define variables
% x = solver.variable(dx, Npred + 1);
% u = solver.variable(du, Npred);
% alpha = solver.variable(4, Npred + 1);
% xinit = solver.parameter(dx, 1);
% uinit = solver.parameter(du, 1);
% 
% H = A_ob;
% b = b_ob + 0.15 * ones(4, 1);
% M = 10^5;
% 
% %% Initialize constraints
% solver.subject_to(x(:, 1) == xinit)
% for k = 1 : Npred
%     solver.subject_to(x(:, k + 1) == A * x(:, k) + B * u(:, k))
%     solver.subject_to(umin <= u(:, k) <= umax)
%     % solver.subject_to(ymin <= C * x(:, k) + D * u(:, k) <= ymax)
%     solver.subject_to(-H * x(1:2, k+1) <= -b + M * alpha(:, k+1))
%     solver.subject_to(sum(alpha(:, k+1)) <= 3)
%     if k == 1
%         solver.subject_to(delta_umin <= u(:, k) - uinit <= delta_umax);
%     else
%         solver.subject_to(delta_umin <= u(:, k) - u(:, k - 1) <= delta_umax)
%     end
% end
% 
% 
% %% Initialize objective
% objective = 0;
% for k = 1 : Npred
%     objective = objective + (x(:, k) - xref)' * Q * (x(:, k) - xref) + u(:, k)' * R * u(:, k);
% end
% 
% objective = objective + (x(:, Npred + 1) - xref)' * P * (x(:, Npred + 1) - xref);
% solver.minimize(objective)
% 
% %% Define the solver
% % options.ipopt.print_level = 0;
% % options.ipopt.sb= 'yes';
% % options.print_time = 0;
% % solver.solver('ipopt', options)
% x_ = reshape(zeros(dx, Npred + 1), 1, []);
% u_ = reshape(zeros(du, Npred), 1, []);
% alpha_ = reshape(ones(4, Npred + 1), 1, []);
% option.discrete = [x_, u_, alpha_];
% solver.solver('bonmin', option);
% 
% %% simulation loop
% usim = zeros(du, Nsim);
% ysim = zeros(dy, Nsim);
% xsim = zeros(dx, Nsim);
% xsim(:, 1) = x0;
% usim_init = u0;
% 
% x_fin = [];
% 
% for i = 1 : Nsim
%     solver.set_value(xinit, xsim(:, i))
%     solver.set_value(uinit, usim_init)
%     sol = solver.solve();
%     usol = sol.value(u);
%     usim_init = usol(:, 1);
%     usim(:, i) = usol(:, 1);
%     xsim(:, i + 1) = A * xsim(:, i) + B * usim(:, i);
%     ysim(:, i) = C * xsim(:, i) + D * usim(:, i);
% 
%     % aux = sol.value(x);
%     % x_fin = [x_fin, aux(:, end)];
% 
% end
% 
% hold on
% scatter(xsim(1, :), xsim(2, :))
% legend('initial', 'modified')
