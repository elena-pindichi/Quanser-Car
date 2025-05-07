clc, close all, clear;
import casadi.*

% Parameters
N = 12;
nx = 4;
nu = 2;
Ts = 0.1;
l = 0.256;
Q_val = 100;
R_val = 2;
P_val = 10;

% Symbolic variables
x0 = MX.sym('x0', nx);
xref = MX.sym('xref', nx, N+1);
uref = MX.sym('uref', nu, N);

x = MX.sym('x', nx, N+1);
u = MX.sym('u', nu, N);

Q = Q_val * eye(nx);
R = R_val * eye(nu);
P = P_val * Q;

f_dynamics = @(x, u) [ u(1) * cos(x(3));
                       u(1) * sin(x(3));
                       u(1)/l * tan(x(4));
                       u(2)];

% Constraints and objective
obj = 0;
g = [];

g = [g; x(:,1) - x0];

for k = 1:N
    x_next = x(:,k) + Ts * f_dynamics(x(:,k), u(:,k));
    g = [g; x(:,k+1) - x_next];
    obj = obj + (x(:,k) - xref(:,k))'*Q*(x(:,k) - xref(:,k)) + ...
                (u(:,k) - uref(:,k))'*R*(u(:,k) - uref(:,k));
end

obj = obj + (x(:,N+1) - xref(:,N+1))'*P*(x(:,N+1) - xref(:,N+1));

% Decision variables
w = [x(:); u(:)];

% Bounds
phimax = pi/2;
Vmin = -1; Vmax = 1;
omegamin = -1; omegamax = 1;

lbx = -inf*ones(size(w));
ubx =  inf*ones(size(w));

% Apply phi bounds
for k = 2:N+1
    idx = (k-1)*nx + 4;
    lbx(idx) = -phimax;
    ubx(idx) =  phimax;
end

% Apply control input bounds
offset = nx*(N+1);
for k = 1:N
    idx1 = offset + (k-1)*nu + 1;
    idx2 = offset + (k-1)*nu + 2;
    lbx(idx1) = Vmin;
    ubx(idx1) = Vmax;
    lbx(idx2) = omegamin;
    ubx(idx2) = omegamax;
end

% Construct problem
nlp = struct('x', w, 'f', obj, 'g', g, 'p', [x0; xref(:); uref(:)]);
solver = nlpsol('solver', 'ipopt', nlp);

% Create a function mapping from input -> optimal input
sol = solver('x0', zeros(size(w)), 'lbx', lbx, 'ubx', ubx, ...
             'lbg', zeros(size(g)), 'ubg', zeros(size(g)), ...
             'p', [x0; xref(:); uref(:)]);

% Extract the first input
w_opt = sol.x;
u1 = w_opt(nx*(N+1)+1:nx*(N+1)+nu);

% Create a CasADi Function
f_mpc = Function('f_mpc', {x0, xref, uref}, {u1});

% Save it
f_mpc.save('f_mpc.casadi');
