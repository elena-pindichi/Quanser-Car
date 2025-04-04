%% initialization data
clear; close all; clc

A = [0 -1; -1 0; 0 1; 1 0]; 
b = [0; 0 ; 5; 10];

P = Polyhedron(A, b);

figure(); hold on;
plot(P)
plot(0, 0, 'ob', 'MarkerSize', 10)

c1 = [1; 2.5];
c2 = [4; 1];
c3 = [2; 2];
c4 = [2; 4];
c5 = [8; 2.5];

C0 = [c1 c2 c3 c4 c5];

%% optimization problem
clc;
x = sdpvar(3, 1); % x=[xc(1) xc(2) r] where xc - center and r -\rho radius

f = [0; 0; -1];
objective= f' * x;

constraints = [-x(3) <= 0];
% constraints = []
for i = 1 : size(A, 1)
   xi = x(1:2) + (1/norm(A(i,:))) * A(i, :)' * x(3);
   constraints = [constraints, A(i, :) * xi <= b(i)];
end

options = sdpsettings('debug','flag','solver','fmincon');
diagnostics = optimize(constraints, objective, options);

x = double(x);

xc = x(1:2)                 % this is the center of the Chebyshev radius
r = x(3)                    % the Chebyshev radius

%% plot the result
t = linspace(0, 1, 1e3)';
plot(P);
hold on
plot(xc(1), xc(2), 'y*') 

ellipplot(eye(2), r^2, 'b', xc)

for i = 1 : size(P.A, 1)
    plot(xc(1) + r * P.A(i, 1), xc(2) + r * P.A(i, 2), 'g*')
end

plot(xc(1), xc(2), '*')

for i = 1 : size(C0, 2)
    plot(C0(1, i), C0(2, i), '*y')
end

% saveas(gcf, './cebisev_pert_2', 'epsc');
