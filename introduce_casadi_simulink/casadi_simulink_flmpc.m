clc, close all, clear;
import casadi.*

N = 5;
T = 20;
dt = 0.1;
l = 0.256;
Delta = 0.35;
Q_val = 30;
R_val = 1;
rhat = min(Delta*l*10/sqrt(Delta*Delta + l*l), 1);

Q = Q_val * eye(2);
R = R_val * eye(2);
A = eye(2);
B = dt * eye(2);

% Define state and control symbols
x = SX.sym('x');    
y = SX.sym('y');    
theta = SX.sym('theta'); 
phi = SX.sym('phi');
states = [x; y; theta; phi];
n_states = length(states);

v = SX.sym('v');        
omega = SX.sym('omega');
controls = [v; omega];
n_controls = length(controls);

% Define system dynamics
xdot = [v*cos(theta);
        v*sin(theta);
        v/l*tan(phi);
        omega];

% Define the system dynamics function
f = Function('f', {states, controls}, {xdot});

xref = [10; 10; 0; 0];
zref = LinOutput(xref, Delta, l);

% ZOH for dynamics
X0 = MX.sym('X0', n_states);
U = MX.sym('U', n_controls);
X = X0;
Z0 = LinOutput(X0, Delta, l);

F = Function('F', {X0, U}, {X0 + dt*f(X0, U)}, {'x0','u'}, {'xf'});

% Build the NLP
w = {};     % Decision variables
w0 = [];    % Initial guess
lbw = [];   % Lower bounds
ubw = [];   % Upper bounds
g = {};     % Constraints
lbg = [];
ubg = [];
J = 0;

% Initial state
Xk = MX.sym('X0', n_states);
w = {w{:}, Xk};
w0 = [w0; zeros(n_states,1)];
lbw = [lbw; zeros(n_states,1)];
ubw = [ubw; zeros(n_states,1)];
Zk = LinOutput(Xk, Delta, l);

% Formulate optimization problem
for k = 0 : N-1
    % Control variable
    Wk = MX.sym(['W_' num2str(k)], n_controls);
    w = {w{:}, Wk};
    w0 = [w0; 0; 0];
    lbw = [lbw; -inf; -inf];
    ubw = [ubw;  inf;  inf];

    M = LinMatrix(Xk(3:4), Delta, l);
    Uk = M^(-1) * Wk;

    % Integrate dynamics
    Fk = F('x0', Xk, 'u', Uk);
    Xk_end = Fk.xf;

    Zk_end = LinOutput(Xk_end, Delta, l);
    % Zk_end = A * Zk + B * Wk;

    % Cost function: tracking + control effort
    J = J + (Zk - zref)' * Q * (Zk - zref) + Wk' * R * Wk;

    % New state variable
    Xk = MX.sym(['X_' num2str(k+1)], n_states);
    w = {w{:}, Xk};
    w0 = [w0; zeros(n_states,1)];
    lbw = [lbw; -inf; -inf; -inf; -inf];
    ubw = [ubw;  inf; inf; inf; inf];
    Zk = LinOutput(Xk, Delta, l);
    % Zk = MX.sym(['Z_' num2str(k+1)], 2);
    % w = {w{:}, Zk};
    % w0 = [w0; zeros(2,1)];
    % lbw = [lbw; -inf; -inf];
    % ubw = [ubw;  inf; inf];

    % Add dynamics constraint
    g = {g{:}, Zk_end - A * Zk - B * Wk, Wk' * Wk};
    lbg = [lbg; zeros(2,1); -inf];
    ubg = [ubg; zeros(2,1); rhat];
end

% NLP setup
prob = struct('f', J, 'x', vertcat(w{:}), 'g', vertcat(g{:}));
opts = struct('ipopt', struct('print_level', 0), 'print_time', false);
solver = nlpsol('solver', 'ipopt', prob, opts);

% Export initial state symbol
s0 = MX.sym('s0', n_states);
lbw_sym = MX(lbw);
ubw_sym = MX(ubw);
lbw_sym(1:n_states) = s0;
ubw_sym(1:n_states) = s0;

% Solve the problem symbolically
sol_sym = solver('x0', w0, ...
                 'lbx', lbw_sym, ...
                 'ubx', ubw_sym, ...
                 'lbg', lbg, ...
                 'ubg', ubg);

% Map from initial state to first control input
mpc_fun = Function('mpc_fun', {s0}, {sol_sym.x(n_states+1:n_states+2)});

% Save to file
mpc_fun.save('mpc_fun.casadi');

% Compile the function using CasADi C interface
inc_path = GlobalOptions.getCasadiIncludePath();
lib_path = GlobalOptions.getCasadiPath();
mex('-v',['-I' inc_path],['-L' lib_path],'-lcasadi', 'casadi_fun.c')

disp("MPC function compiled and saved.")

function z = LinOutput(q,Delta,L)
z = [q(1)+L*cos(q(3))+Delta*cos(q(3)+q(4));
     q(2)+L*sin(q(3))+Delta*sin(q(3)+q(4))];
end

function M = LinMatrix(eta, Delta, L)
s1 = sin(eta(1)+eta(2)); c1 = cos(eta(1)+eta(2)); 
M = [cos(eta(1))-tan(eta(2))*(sin(eta(1))+Delta*s1/L), -Delta*s1;
     sin(eta(1))+tan(eta(2))*(cos(eta(1))+Delta*c1/L),  Delta*c1];
end

function O = LinDyna(eta,L,Delta)
s1 = sin(eta(1)+eta(2)); c1 = cos(eta(1)+eta(2)); 
O = [sin(eta(2))*c1/L,             sin(eta(2))*s1/L;
    -sin(eta(2))*c1/L-s1/Delta,    -sin(eta(2))*s1/L-c1/Delta];
end