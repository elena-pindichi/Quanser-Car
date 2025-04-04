close all; clear; clc;

% load('trajectory_1.mat');
load('trajectory_2.mat');

psi_ref = desired_psi;
pos_ref = desired_position;
Tfin = desired_position(end, 1);

%% Physical Parameters
g = 9.81;                 
m = 28 * 1e-3;            
I_BF = diag([1.4, 1.4, 2.2]) .* 1e-5; 

pos_init = [0; 0; 0]; 
vel_init = [0; 0; 0];
angle_init = [0; 0; 0];

Npred = 15;               

Ts = 0.01;     
t = (0 : Ts : Tfin)';

A = [zeros(3, 3) eye(3); zeros(3, 6)];
B = [zeros(3, 3); eye(3)]; 
sys_c = ss(A, B, eye(size(A)), zeros(size(B))); 
sys_d = c2d(sys_c, Ts, 'zoh');
A = sys_d.A;
B = sys_d.B;
% A = eye(6) + Ts * A;
% B = B*Ts;

%% Dynamics Functions
W = @(eta) [1       0        -sin(eta(2)); 
            0  cos(eta(1))   sin(eta(1))*cos(eta(2));
            0  -sin(eta(1))  cos(eta(1))*cos(eta(2))];

W_dot = @(eta, rates) [1      0                      -cos(eta(2))*rates(2);
                       0    -sin(eta(1)) * rates(1)  cos(eta(1))*rates(1)*cos(eta(2)) - sin(eta(1))*sin(eta(2))*rates(2);
                       0    -cos(eta(1)) * rates(1)  -sin(eta(1))*rates(1)*cos(eta(2)) + cos(eta(1))*sin(eta(2))*rates(2)];

eps_ddot = @(x, u) [x(4); x(5); x(6); 0; 0; -g] + ...
    1/m * [0; 0; 0; cos(u(2)) * sin(u(3)) * cos(x(9)) + sin(u(2)) * sin(x(9));
            cos(u(2)) * sin(u(3)) * sin(x(9)) - sin(u(2)) * sin(x(9));
            cos(u(2)) * cos(u(3))] * u(1);

eta_ddot = @(x, tau) [x(10); x(11); x(12); 0; 0; 0] + ...
    [0; 0; 0; (I_BF * W(x(7:9))) \ (tau - I_BF * W_dot(x(7:9), x(10:12)) * x(10:12) - cross(W(x(7:9)) * x(10:12), I_BF * W(x(7:9)) * x(10:12)))];


%% Controller Parameters

Q = diag([100, 100, 100, 5, 5, 5]);  
R = diag([0.1, 0.1, 0.1]);

n = 6; du = 3;

Tmax = 20;
eps_max = 0.25;

import casadi.*
solver = casadi.Opti();
x = solver.variable(n, Npred + 1);
v = solver.variable(du, Npred);

xinit = solver.parameter(n, 1);
vinit = solver.parameter(du, 1);
xref_param = solver.parameter(n, Npred);
psi_ref_param = solver.parameter(1, 1);

%% Initial constraints
solver.subject_to(x(:, 1) == xinit);
for k = 1 : Npred
    solver.subject_to(x(:, k+1) == A * x(:, k) + B * v(:, k));
    % solver.subject_to(v(3, k) >= -g)
    % solver.subject_to(v(1, k)^2 + v(2, k)^2 <= (v(3, k) + g)^2 * tan(eps_max)^2)
    % solver.subject_to(v(1, k)^2 + v(2, k)^2 + (v(3, k) + g)^2 <= Tmax^2)
end

%% Objective
objective = 0;
for k = 1 : Npred
    state_error = x(:, k) - xref_param(:, k);
    if k == 1
        control_effort = v(:, k) - vinit;
    else
        control_effort = v(:, k) - v(:, k-1);
    end
    objective = objective + state_error' * Q * state_error + control_effort' * R * control_effort;
end
solver.minimize(objective);

solver.solver('ipopt');

%% Initialization
state_xi = zeros(6, length(t));
state_xi2 = zeros(6, length(t));
state_eta = zeros(6, length(t));
angle_refs = zeros(3, length(t));
thrusts = zeros(1, length(t));
angular_acc_ref = zeros(3, length(t));
vsim = zeros(3, length(t));

state_xi(:, 1) = [pos_init; vel_init];
state_xi2(:, 1) = [pos_init; vel_init];

solver.set_value(vinit, zeros(3, 1));

elapsed_time = tic;

%% Simulation Loop
for i = 1 : length(t)-1
    % Position Control
    if i + Npred <= length(t)
        solver.set_value(xref_param, pos_ref(i:i+Npred-1, 2:7)');
    else
        solver.set_value(xref_param, pos_ref(end-Npred+1:end, 2:7)');
    end
    solver.set_value(xinit, state_xi(:, i));
    solver.set_value(psi_ref_param, psi_ref(i, 2));

    sol = solver.solve();
    vopt = sol.value(v);
    vsim(:, i) = vopt(:, 1);
    
    v_ap = vsim(:, i);

    % Feedback Linearization for Thrust and Desired Angles
    % [T, phi_d, theta_d] = fl_laws(v_ap, psi_ref(i, 2));
    [T, phi_d, theta_d] = fl_laws(v_ap, state_eta(3, i));
    
    thrusts(i) = T;
    angle_refs(:, i) = [phi_d; theta_d; psi_ref(i, 2)];
    
    % Attitude Control -> Inner Loop
    if i == 1
        angular_acc_ref(:, i) = 0;
        ref_angle_ddot = 0;
    else
        angular_acc_ref(:, i) = (angle_refs(:, i) - angle_refs(:, i-1)) / Ts;
        ref_angle_ddot = (angular_acc_ref(:, i) - angular_acc_ref(:, i-1)) / Ts;
    end

    tau = run_att_PD(state_eta(:, i), angle_refs(:, i), angular_acc_ref(:, i), ref_angle_ddot);

    % State Update
    acc = eps_ddot([state_xi(:, i); state_eta(:, i)], [T; phi_d; theta_d]);
    ang_acc = eta_ddot([state_xi(:, i); state_eta(:, i)], tau);
    
    state_xi(:, i+1) = A * state_xi(:, i) + B * v_ap;

    state_xi2(:, i+1) = state_xi2(:, i) + Ts * [state_xi2(4:6, i); acc(4:6)];

    state_eta(4:6, i+1) = state_eta(4:6, i) + ang_acc(4:6) * Ts;
    state_eta(1:3, i+1) = state_eta(1:3, i) + state_eta(4:6, i) * Ts;
end

elapsed_time = toc(elapsed_time);

%%
figure; hold on; grid on;
for i = 1 : 6
    subplot(6, 1, i); hold on; grid on
    plot(state_xi(i, :))
    plot(state_xi2(i, :))
end

%% Figures
%% Angles
figure; 
subplot(3, 1, 1); hold on; grid on
plot(t, state_eta(1, :))
plot(t, angle_refs(1, :),'--')
legend('sim', 'ref')
yline(eps_max, 'r--', "HandleVisibility", "off")
yline(-eps_max, 'r--', "HandleVisibility", "off")
ylabel('\phi (rad)')

subplot(3,1,2); hold on; grid on
plot(t, state_eta(2, :))
plot(t, angle_refs(2, :),'--')
legend('sim', 'ref')
yline(eps_max, 'r--', "HandleVisibility", "off")
yline(-eps_max, 'r--', "HandleVisibility", "off")
ylabel('\theta (rad)')

subplot(3,1,3); hold on; grid on
plot(t, state_eta(3, :))
plot(t, angle_refs(3, :),'--')
legend('sim', 'ref')
ylabel('\psi (rad)')

sgtitle('Angles')


%% Position 
figure
subplot(3,1,1); hold on; grid on
plot(t, state_xi(1, :))
plot(t, pos_ref(:, 2), '--')
legend('sim', 'ref')
ylabel('x (m)')

subplot(3,1,2); hold on; grid on
plot(t, state_xi(2, :))
plot(t, pos_ref(:, 3), '--')
legend('sim', 'ref')
ylabel('y (m)')

subplot(3,1,3); hold on; grid on
plot(t, state_xi(3, :))
plot(t, pos_ref(:, 4), '--')
legend('sim', 'ref')
ylabel('z (m)')

sgtitle('Positions')

%% Thrusts
figure(); hold on; grid on
plot(t, thrusts/m)
yline(Tmax, 'r--')
legend('sim', 'lim')
ylabel('T (m/s^2)')
title("Thrust")

