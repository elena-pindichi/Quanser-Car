clc; clear; close all;
addpath(genpath('mpt3')) % Ensure MPT3 toolbox is installed

%% Step 1: Generate Random Convex Polytopes (Obstacles)
num_obstacles = 3; % Number of obstacles
obstacles = cell(1, num_obstacles);
for i = 1:num_obstacles
    center = rand(1,2) * 10; % Random center in 10x10 space
    points = center + randn(5,2); % Generate 5 vertices
    obstacles{i} = Polyhedron('V', points);
end

% Plot Obstacles
figure; hold on; axis equal;
for i = 1:num_obstacles
    plot(obstacles{i}, 'color', 'r', 'alpha', 0.5);
end
title('Random Polytopes (Obstacles)'); xlabel('x'); ylabel('y');

%% Step 2: Compute Voronoi Diagram & Buffer the Cells
obstacle_centers = cell2mat(cellfun(@(o) mean(o.V,1), obstacles, 'UniformOutput', false));
% Ensure unique points
obstacle_centers = unique(obstacle_centers', 'rows')'; 

% If too few points, add a small noise to ensure uniqueness
if size(obstacle_centers, 2) < 3
    obstacle_centers = obstacle_centers + 1e-6 * randn(size(obstacle_centers));
end

% Check number of unique points before running voronoin
disp('Unique Points Count:');
disp(size(obstacle_centers, 2));

if size(obstacle_centers, 2) < 3
    error('Still not enough unique points for Voronoi diagram.');
end

% Compute Voronoi diagram
[vertices, edges] = voronoin(obstacle_centers);



% Plot Voronoi Diagram
figure; hold on; axis equal;
plot(vertices(:,1), vertices(:,2), 'ko');
for i = 1:size(edges,1)
    v1 = vertices(edges(i,1),:);
    v2 = vertices(edges(i,2),:);
    plot([v1(1), v2(1)], [v1(2), v2(2)], 'k');
end
for i = 1:num_obstacles
    plot(obstacles{i}, 'color', 'r', 'alpha', 0.5);
end
title('Voronoi Diagram with Obstacles'); xlabel('x'); ylabel('y');

% Compute Buffered Voronoi Cells
buffer_size = 0.5; % Safety margin
buffered_obstacles = cell(1, num_obstacles);
for i = 1:num_obstacles
    buffered_obstacles{i} = obstacles{i} + buffer_size;
end

% Plot Buffered Obstacles
figure; hold on; axis equal;
for i = 1:num_obstacles
    plot(buffered_obstacles{i}, 'color', 'b', 'alpha', 0.3);
    plot(obstacles{i}, 'color', 'r', 'alpha', 0.5);
end
title('Buffered Voronoi Cells'); xlabel('x'); ylabel('y');

%% Step 3: Generate B-Spline Trajectory (Safe Path)
n = 10; d = 5; knot = [0 50];
[bs,knot] = bsplines(n, d, knot);
[M, ~] = bsplineConversionMatrices(n, d, knot);
tt = linspace(min(knot), max(knot)-0.000001, 1000);

% Define Control Points Avoiding Obstacles
P = [1, 2, 4, 6, 8, 10;  % X-coordinates
     1, 3, 5, 3, 2, 1];  % Y-coordinates

% Ensure Control Points Stay in Voronoi Safe Zone
for i = 1:size(P,2)
    while any(cellfun(@(obs) obs.contains(P(:,i)'), buffered_obstacles))
        P(:,i) = P(:,i) + 0.2 * randn(2,1); % Adjust control points
    end
end

% Generate B-Spline Curve
x=@(t) 0; y=@(t) 0;
for i=1:length(bs{end})
    x=@(t)(x(t) + P(1,i) .* bs{end}{i}(t));
    y=@(t)(y(t) + P(2,i) .* bs{end}{i}(t));
end
xref = x(tt); yref = y(tt);

% Plot Trajectory
figure; hold on; axis equal;
plot(xref, yref, 'b', 'LineWidth', 2);
scatter(P(1,:), P(2,:), 'filled', 'ob');
for i = 1:num_obstacles
    plot(obstacles{i}, 'color', 'r', 'alpha', 0.5);
end
title('Collision-Free B-Spline Trajectory'); xlabel('x'); ylabel('y');

%% Step 4: Integrate with MPC for Obstacle Avoidance
Npred = 10; % Prediction horizon
import casadi.*;
opti = Opti();
X = opti.variable(2, Npred+1); % State (x, y)
U = opti.variable(2, Npred); % Control inputs

% MPC Cost Function (Minimize Deviation from B-Spline Path)
cost = 0;
for k = 1:Npred
    cost = cost + norm(X(:,k) - [xref(k); yref(k)])^2;
end
opti.minimize(cost);

% Collision Avoidance Constraints
for k = 1:Npred
    for i = 1:num_obstacles
        opti.subject_to( norm(X(:, k) - mean(obstacles{i}.V,1)') >= buffer_size);
    end
end

% Solve MPC
opti.solver('ipopt');
sol = opti.solve();

% Extract Solution
X_opt = sol.value(X);
U_opt = sol.value(U);

% Plot MPC Controlled Path
figure; hold on; axis equal;
plot(X_opt(1,:), X_opt(2,:), 'g', 'LineWidth', 2);
plot(xref, yref, 'b', 'LineWidth', 1);
for i = 1:num_obstacles
    plot(obstacles{i}, 'color', 'r', 'alpha', 0.5);
end
title('MPC Controlled Path'); xlabel('x'); ylabel('y');
