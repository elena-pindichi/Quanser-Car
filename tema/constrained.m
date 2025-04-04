%% CONSTRAINED MPC
clc; clear; close all;
a = 15 * [-1 1 -1 1];
mu = 3;
M = 60;
Ts = 0.5;

A = [eye(2) Ts.*eye(2); zeros(2) (1-mu/M*Ts).*eye(2)];
B = [zeros(2); M*Ts*eye(2)];

[n, m] = size(B);

Q = 1e-2 .* eye(n);
R = 1e-2 .* eye(m);

load('path.mat', 'path');             
x0 = [path(1, :)'; 0; 0];             
xf = [path(end, :)'; 0; 0];            

umin = -1 * ones(m, 1);
umax = 1 * ones(m, 1);
            
xmin = -15 * ones(2, 1);
xmax = 15 * ones(2, 1);

Npred = 10;
Nsim = 700;                          
tol = 1e-3; 

%%
u = sdpvar(repmat(m, 1, Npred), ones(1, Npred));         
x = sdpvar(repmat(n, 1, Npred+1), ones(1, Npred+1));  
xref = sdpvar(n, 1);

constraints = [];
objective = 0;
for k = 1 : Npred
    x{k+1} = A * x{k} + B * u{k};
    objective = objective + (x{k} - xref)' * Q * (x{k} - xref) + u{k}' * R * u{k}; 
    constraints = [constraints, xmin <= x{k}(1:2) <= xmax, umin <= u{k} <= umax];                 
end

options = sdpsettings('verbose', 2);
controller = optimizer(constraints, objective, options, {x{1}, xref}, u{1});

%% run over the simulation horizon
figure; hold on; grid on;
scatter(path(:,1), path(:,2), 'filled', 'b');
axis(a);

x_sim = {x0};
u_sim = {};
y_sim = {};
hh = [scatter(x_sim{end}(1), x_sim{end}(2), 'filled', 'r')];

i = 0; 
rf = [path(2,:)'; 0; 0]; 
kmax = size(path, 1);

times = [];

while i <= Nsim
 title(['step ' num2str(i)]);
 i = i + 1;

 tstart = tic;
 u_sim{i} = controller{x_sim(:,end), rf};
 elapsed = toc(tstart);
 times = [times; elapsed];

 x_sim{i + 1} = A * x_sim{i} + B * u_sim{i};

 if (norm(xf(1:2) - x_sim{end}(1:2)) <= tol)
     N_goal = i;
     break
 end

 hh = [hh scatter(x_sim{end}(1), x_sim{end}(2), 'filled', 'r')];
 drawnow
 
  k = min(i + 2, kmax);
  rf = [path(k,:)'; 0; 0];  
end

saveas(gcf, 'ref_track', 'epsc');

secv_u = [u_sim{:}];
figure
plot(secv_u(1, :))
hold on; grid on;
plot(secv_u(2,:))
legend('first input (x)','second input (y)')

saveas(gcf, 'inputs', 'epsc');

secv_x = [x_sim{:}];
figure
plot(secv_x(1,:))
hold on; grid on;
plot(secv_x(2,:))
legend('position (x)','position (y)')

saveas(gcf, 'positions', 'epsc');