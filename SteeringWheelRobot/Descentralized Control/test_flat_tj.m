clc, close all, clear all;

% Number of robots
N_robots = 4;
T = 20;
d_min = 0.3; % Minimum distance for collision avoidance

% Initial and final conditions for each robot
initial_conditions = [
    0 0 0;   
    0.2 0.2 0; 
    -0.2 -0.2 0; 
    0.3 -0.3 0; 
];

final_conditions = [1.2 0.9 0];

% Preallocate variables
z1_functions = cell(1, N_robots);
z2_functions = cell(1, N_robots);
z1d_functions = cell(1, N_robots);
z2d_functions = cell(1, N_robots);

for i = 1:N_robots
    xi = initial_conditions(i, :)';
    xf = final_conditions';

    % Polynomial coefficients for trajectory
    M = [1 0 0 0 0 0 0 0 0 0 0 0;
         0 1 0 0 0 0 0 0 0 0 0 0;
         0 0 2 0 0 0 0 0 0 0 0 0;
         0 0 0 0 0 0 0 0 0 1 0 0;
         0 0 0 0 0 0 0 0 0 0 1 0;
         0 0 0 0 0 0 0 0 0 0 0 2;
         1 T T^2 T^3 T^4 T^5 0 0 0 0 0 0;
         0 1 2*T 3*T^2 4*T^3 5*T^4 0 0 0 0 0 0;
         0 0 2 6*T 12*T^2 20*T^3 0 0 0 0 0 0;
         0 0 0 0 0 0 1 T T^2 T^3 T^4 T^5;
         0 0 0 0 0 0 0 1 2*T 3*T^2 4*T^3 5*T^4;
         0 0 0 0 0 0 0 0 2 6*T 12*T^2 20*T^3];

    b = [xi(1) 0 0 xi(2) 0 0 xf(1) 0 0 xf(2) 0 0]';
    a = inv(M) * b;

    % Trajectory functions
    z1_functions{i} = @(t) (a(1) + a(2)*t + a(3)*t.^2 + a(4)*t.^3 + a(5)*t.^4 + a(6)*t.^5);
    z2_functions{i} = @(t) (a(7) + a(8)*t + a(9)*t.^2 + a(10)*t.^3 + a(11)*t.^4 + a(12)*t.^5);

    z1d_functions{i} = @(t) (a(2) + 2*a(3)*t + 3*a(4)*t.^2 + 4*a(5)*t.^3 + 5*a(6)*t.^4);
    z2d_functions{i} = @(t) (a(8) + 2*a(9)*t + 3*a(10)*t.^2 + 4*a(11)*t.^3 + 5*a(12)*t.^4);
end

% Simulate and visualize trajectories
figure; hold on; grid on;
colors = ['r', 'g', 'b', 'k'];
tt = 0:0.1:T;

for i = 1:N_robots
    z1_traj = arrayfun(z1_functions{i}, tt);
    z2_traj = arrayfun(z2_functions{i}, tt);
    plot(z1_traj, z2_traj, 'Color', colors(i), 'LineWidth', 1.5);
end

xlabel('X-axis'); ylabel('Y-axis');
title('Trajectories of Robots');
legend('Robot 1', 'Robot 2', 'Robot 3', 'Robot 4');
