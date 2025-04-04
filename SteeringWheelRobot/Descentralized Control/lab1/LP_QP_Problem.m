clc, close all, clear all;

%% Polyhedra and creation of polytope

A = [1 1; 1 -1; -1 -1; -1 1];
b = [1; 1; 1; 1];

Pe = Polyhedron('A', A, 'b', b, 'Ae', [1 1], 'be', 1);

P1 = Polyhedron(A, b); % polytope representation
figure
hold on
plot(P1)

%% Dual representation

V = [0.5, 2; 0.5 -3; 4 2; 4 -3]; % vertices of the generator representation
P2 = Polyhedron(V);
figure
plot(P2)

% Pe = Polyhedron('V', [0 1; 1 0; 0 -1], 'R', [1 0]);
% hold on;
% plot(Pe)

Pall = [P2 P1];
figure
plot(Pall)

%% Polyhedral operations

% P1<=P2
% P1=P2
% plot(P1.intersect(P2))
% Padd = P1+P2
% figure
% plot(Padd)
Pdiff = P2 - P1
figure
plot(Pdiff)
% figure
% plot(P1\P2)

%% Optimization problems

clc, close all; 
x=sdpvar(2 ,1); % generation of symbolic decision variable 
constraints = [A * x <= b ];
objective = x' * x;
options = [];
sol = optimize(constraints, objective, options); % doing the optimization problem with constraints and cost
double(x) % numerical value of the solution

%% LP Problem

x = sdpvar(2, 1);
constraints = [P2.A * x <= P2.b];
% c = rand (2, 1) - 0.5;
c = [-0.-412; 0.4631];
objective = c' * x;
options = [];
sol = optimize(constraints, objective, options)
double(x)

%% Quadratic problem

x = sdpvar(2, 1);
H = rand(2);
H = H * H';  % it has to be positive definite
f = rand(2, 1) - 0.5;
constraints = [P2.A * x <= P2.b];
objective = 1/2 * x' * H * x + f' * x;
sol = optimize(constraints, objective, options)
double(x)

%% Solving LP problem using CASADI

V = [0.5, 2; 0.5 -3; 4 2; 4 -3]; % vertices of the generator representation
P2 = Polyhedron(V);
H = rand(2);
H = H * H';
f = rand(2, 1) - 0.5;

solver = casadi.Opti();
c = rand(2, 1) - 0.5;
% c = [-0.-412; 0.4631];
x = solver.variable(2, 1);
constraints = P2.A * x <= P2.b;
objective = c' * x;
objective2 = x' * H * x + f' * x;

options.ipopt.print_level = 0;
options.ipopt.sb = 'yes';
options.print_time = 0;
solver.subject_to(constraints)
solver.minimize(objective2)
solver.solver('ipopt', options);

timer = tic;
solution = solver.solve();
time2 = toc(timer);

xcas = solution.value(solver.x);
fprintf('QP solution using CasADi = [%f %f]', xcas(1), xcas(2));

%% plotting part for QP
xunc = -inv (H) * f ;

% Cost function value comparison
Func = (xunc' * H * xunc / 2 + f' * xunc);
Fquad= (xcas' * H * xcas / 2 + f' * xcas);

% Generate the quadratic cost in form of an ellipse
[xxquad, yyquad] = createEllipse(H, f, Fquad);
[xxquad2, yyquad2] = createEllipse(H, f, Fquad * (-2));
[xxquad3, yyquad3] = createEllipse(H, f, Fquad * 0.5);

figure
hold on
h4 = plot(xxquad, yyquad, 'k');
h5 = plot(xxquad2, yyquad2, Linestyle = "-");
h6 = plot(xxquad3, yyquad3, Linestyle = "-");
h3 = scatter(xcas(1), xcas(2), 50, 'filled', 'r');
h2 = scatter(xunc(1), xunc(2), 50, 'filled', 'g');
h1 = plot(P2);

title('Quadratic cost constrained otimization problem')
legend([h1 h2 h3 h4], 'Constraints', 'Unconstrained optimum', 'Constrained optimum', 'Quadratic cost',...
    'Location', 'best')


%% plotting part for LP
figure 
hold on
plot(P2)
scatter(xcas(1), xcas(2), 50, 'filled', 'r')

% a = 2 * axis;
% axis(a);
a = axis;

plot([0, c(1)],[0 c(2)])

plot(a([1 2]), ((c' * xcas(:)- c(1) .* a([1 2])) ./ c(2)), 'k')
for i = 0:0.5:2
    if i ~= 1
        plot(a([1 2]), ((i * c' * xcas(:)- c(1) .* a([1 2])) ./ c(2)), linestyle = '-')
    end
end


title('Linear cost constrained otimization problem')
legend('Constraints', 'Optimal solution', 'Linear cost', location = 'best')

%% Exercise 3

A = [-0.5 0.2; 0.2 -0.8];
B = eye(2);
delta = [1; 1];

Te = 0.1;
A = eye(2) + Te * A;
B = Te * B;

[V, J] = jordan(A);
error = 0;

A_poly = [inv(V); -inv(V)];
b_poly = inv(eye(2) - abs(J)) * abs(inv(V) * B) * delta + error;
b_poly = [b_poly; b_poly];

Pub = Polyhedron('A', A_poly, 'b', b_poly);
Delta = Polyhedron('A', [eye(2); -eye(2)], 'b', [delta; delta]);

figure
hold on
plot(Pub, 'color', 'blue')
plot(A * Pub+ B * Delta, 'Color', 'yellow')
title('Set with real eigen values')

if A * Pub+ B * Delta <= Pub
    sprintf('The set is robust positive invariant')
end
