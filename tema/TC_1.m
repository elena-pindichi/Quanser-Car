%% initialization data
clear; close all; clc

A = [0 -1; -1 0; 3 -4; 0 1; -1 1]; 
b = [0; 0 ; 1; 1; 3];

Ap = [0 -1; -1 0; 4 -4; 0 1; -0.5 0.5]; 
bp = [0; 0 ; 2; 1; 0.4];

A2 = [0 -1; -1 0; 3 -4];
b2 = [0; 0; 1];

P = Polyhedron(A, b);

figure(); hold on;
plot(P)
plot(0, 0, 'ob', 'MarkerSize', 10)

%% optimization problem
clc;
x = sdpvar(3, 1); % x=[xc(1) xc(2) r] where xc - center and r -\rho radius

f = [0; 0; -1];
objective= f' * x;

constraints = [-x(3) <= 0];
for i = 1 : size(A, 1)
   xi = x(1:2) + (1/norm(A(i,:))) * A(i, :)' * x(3);
   constraints = [constraints, A(i, :) * xi <= b(i)];
end

% options = sdpsettings('debug','flag','solver','fmincon');
% options = sdpsettings('verbose', 2, 'debug', 'flag');
diagnostics = optimize(constraints, objective);

x = double(x);

xc = x(1:2)                 % this is the center of the Chebyshev radius
r = x(3)                    % the Chebyshev radius

%% plot the result
t = linspace(0, 1, 1e3)';
plot(xc(1), xc(2), '*') 
hold on
plot(P);
for i = 1 : size(P.A, 1)
    plot(xc(1) + r * P.A(i, 1), xc(2) + r * P.A(i, 2), '*')
end

ellipplot(eye(2), r^2, 'b', xc)
plot(xc(1), xc(2), '*')
% plot(t, t, '--y')
