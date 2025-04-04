clear; close all; clc;

%% Exercitiul 1.1
f = [2; 3];
A = [-2 -1; 1 -1];
b = [0; 6];

x = linprog(f, A, b);

%% Exercitiul 1.2
H = 2 .* eye(2);
f = [-2; -6];
A = [2 -1; 1 1];
b = [0; 6];
x = quadprog(H, f, A, b);

%% Exercitiul 1.3
close all;
n = 5; 
A = randn(n, 2);
b = randn(n, 1);
P = Polyhedron('A', A, 'b', b);

plot(P)

vertexes = P.V;

%% Exercitiul 1.4
clear; close all; clc;
A1 = [-2 -1; 1 -1];
b1 = [0; 6];
f1 = [2; 3];

A2 = [2 -1; 1 1];
b2 = [0; 6];
f2 = [-2; -6];
H = 2 .* eye(2);

x1 = sdpvar(2, 1);
x2 = sdpvar(2, 1);

obj1 = f1' * x1;
obj2 = x2' * H * x2 / 2 + f2' * x2 + 10;

options = sdpsettings('debug','flag','solver','fmincon');

constraints1 = [A1 * x1 <= b1];
constraints2 = [A2 * x2 <= b2];

sol1 = optimize(constraints1, obj1, options);
sol2 = optimize(constraints2, obj2);

%% Exercitiul 1.5
close all;
A = [0 1; -2 -3]; 
B = eye(2);
Te = 0.1;
A = eye(2) + Te * A;
B = Te * B;
delta = [1; 1];
e = 1e-4;
[V, J] = jordan(A);

A_p = [inv(V); -inv(V)];
b_p = ((eye(length(J)) - abs(J)) \ abs(V \ B)) * delta + e;
b_p = [b_p; b_p];
P = Polyhedron('A', A_p, 'b', b_p);
DELTA = Polyhedron('A', [-eye(2); eye(2)], 'b',  [delta; delta]);

figure(); hold on;
plot(P, 'color', 'red')
plot(A * P + B * DELTA, 'color', 'yellow')



