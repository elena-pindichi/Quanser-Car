clc, close all, clear all;

A = [1 1; 0 1];
B = [1; 0.3];
C = [1 0];
D = 0;

h = 0.5;
A = [eye(2) eye(2) * h; zeros(2) eye(2)];
B = h * [zeros(2); eye(2)];
C = [eye(2) zeros(2)];
D = zeros(2);

umin = -1 * 0.25;
umax =  1 * 0.25;
delta_u_min = -0.1;
delta_u_max =  0.1;

ymin = -10;
ymax =  10;

[dx, du] = size(B);
dy = size(C, 1);

Q = eye(dx);
Qy = eye(dy);
P = 10 * Q;
R = 1;

Npred = 5;
Nsim = 100;

u = sdpvar(repmat(du, 1, Npred), ones(1, Npred));
x = sdpvar(repmat(dx, 1, Npred + 1), ones(1, Npred + 1));
utmp = sdpvar(du, 1);
u_init = sdpvar(du, 1);

constraints = [];
objective = 0;

for k = 1 : Npred
    if(k == 1)
        utmp = u_init;
    else
        utmp = u{k - 1};
    end
    constraints = [constraints , ...
                    x{k + 1} == A * x{k} + B * u{k}, ...
                    umin <= u{k} <= umax, ...
                    delta_u_min <= u{k} - utmp <= delta_u_max];
    objective = objective + x{k}' * Q * x{k} + u{k}' * R * u{k};
end

objective = objective + x{Npred + 1}' * P * x{Npred + 1};

options = [];

parameters = {x{1}, u_init};
output = {u{1}};
controller = optimizer(constraints, objective, options, parameters, output);

usim = zeros(du, Nsim);
ysim = zeros(dy, Nsim);
xsim = zeros(dx, Nsim);
xsim(:, 1) = rand(dx, 1);
usim_init = zeros(du, 1);

for i = 1 : Nsim
    u = controller{{xsim(:, i), usim_init}};
    usim_init = u;
    xsim(:, i + 1) = A * xsim(:, i) + B * u;
    usim(:, i) = u;
    ysim(:, i) = C * xsim(:, i) + D * usim(:, i);
end

figure
stem(ysim)
title('ysim')

figure
scatter(xsim(1, :), xsim(2, :))
title('xsim')

figure
stem(usim)
title('usim')