clc, close all, clear all;

import casadi.*

N = 5;       
Ts = 0.1;     
L = 0.256;      

% Weights
Q = diag([10 0 100 0]);  % Weighting s, s_dot, l, l_dot
R = diag([1 1]);     % Weighting s_ddot, l_ddot
rs = 1000;               % Slack penalty
v_max = 5;

nx = 4; nu = 2;

z0 = [0; 0; 0; 0];
zref = [12; 1; 4; 1];

A = [1 Ts 0 0; 0 1 0 0; 0 0 1 Ts; 0 0 0 1];
B = [Ts^2/2 0; Ts 0; 0 Ts^2/2; 0 Ts];

solver = casadi.Opti();
z   = solver.variable(nx, N + 1);
w   = solver.variable(nu, N);

zinit           = solver.parameter(nx, 1);
zref_param      = solver.parameter(nx, N+1);
wref_param      = solver.parameter(nu, N+1);

solver.subject_to(z(:, 1) == zinit);

for k = 1 : N
    solver.subject_to(z(:, k+1) == A * z(:, k) + B * w(:, k));
end