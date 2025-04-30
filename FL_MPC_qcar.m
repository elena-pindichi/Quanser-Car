clc, clear all, close all;
import casadi.*;
addpath(genpath('tools'))
load("trajectory.mat")

%% Parameters
N_pred_val = 5;                      % Prediction horizon
Q_val = 30;                          % State weight value
R_val = 1;                           % Input weight value
P_val = 10;                         % Terminal state value
l = 0.256;                           % Length between front and rear
Delta = 0.35;                        % Distance in front of the car

% Define prediction and simulation steps
Ts = 0.1;                            % Sampling time
Npred = N_pred_val;                  % Prediction horizon
Nsim =  500;                          % Number of simulation steps

% Define system dimensions
dx = 4;                              % State dimensions: x, y, theta
du = 2;                              % Control dimensions: V, omega
dz = 2;

% Initial condition and references
x0 = [0; 2.5; 0; pi/3];              % Initial state [x; y; theta; phi]
z0 = LinOutput(x0, Delta, l);
eta0 = x0(3:4);
u0 = zeros(du, 1);

%% Trajectories
% Time
t = 0 : 0.3 : 50;
t = 0 : 0.1 : 500;
t = 0 : 0.01 : 50;

% % % % % % % % % % % % % % % % % 
% Line reference
% alpha   = 0.5;
% beta    = 0.8;
% xr = alpha * t;     dxr = alpha + 0*t;    ddxr = 0 + 0*t;   dddxr = 0 + 0*t;
% yr = beta * t;      dyr = beta + 0*t;     ddyr = 0 + 0*t;   dddyr = 0 + 0*t;

% Stairs trajectory
% st = zeros(1,length(t))+[2*ones(1, 100), 5*zeros(1,300), 4*ones(1, length(t)-400)];
% xr = t;     dxr = 1 + 0*t;     ddxr = 0 + 0*t;   dddxr = 0 + 0*t;
% yr = st;    dyr = 0 + 0*t;     ddyr = 0 + 0*t;   dddyr = 0 + 0*t;

% Square trajectory
n = 700;

side_length = 10; 
total_points = n;
quarter = round(total_points / 4);

xr = zeros(1, n);
yr = zeros(1, n);

% Fill square trajectory
% Bottom edge: (0,0) to (10,0)
xr(1:quarter) = linspace(0, side_length, quarter);
yr(1:quarter) = 0;

% Right edge: (10,0) to (10,10)
xr(quarter+1:2*quarter) = side_length;
yr(quarter+1:2*quarter) = linspace(0, side_length, quarter);

% Top edge: (10,10) to (0,10)
xr(2*quarter+1:3*quarter) = linspace(side_length, 0, quarter);
yr(2*quarter+1:3*quarter) = side_length;

% Left edge: (0,10) to (0,0)
xr(3*quarter+1:end) = 0;
yr(3*quarter+1:end) = linspace(side_length, 0, n - 3*quarter);

dxr = gradient(xr, 0.3);        ddxr = gradient(dxr, 0.3);      dddxr = gradient(ddxr, 0.3);   
dyr = gradient(yr, 0.3);        ddyr = gradient(dyr, 0.3);      dddyr = gradient(ddyr, 0.3); 
   
% Circle reference
% alpha   = 6;
% beta    = 5;
% ang     = 0.2;
% xr = alpha*cos(ang*t);      dxr = -alpha*ang*sin(ang*t);    ddxr = -alpha*ang*ang*cos(ang*t);       dddxr = alpha*ang*ang*ang*sin(ang*t);
% yr = beta*sin(ang*t);       dyr = beta*ang*cos(ang*t);      ddyr = -beta*ang*ang*sin(ang*t);        dddyr = -beta*ang*ang*ang*cos(ang*t);

% Spline reference
xr = xref;      dxr = dxref;        ddxr = ddxref;      dddxr = dddxref;
yr = yref;      dyr = dyref;        ddyr = ddyref;      dddyr = dddyref;
% % % % % % % % % % % % % % % % %

% Computing real input reference
Vr      = sqrt(dxr.*dxr + dyr.*dyr);
omegar  = l * Vr .* ((dddyr.*dxr - dddxr.*dyr).*Vr.*Vr - 3 * (ddyr.*dxr - ddxr.*dyr) .* (dxr.*ddxr + dyr.*ddyr)) ...
          ./ (Vr.^6 + l*l*(ddyr.*dxr - ddxr.*dyr).^2);
ur = [Vr; omegar];

% Computing angle reference
thetar  = atan2(dyr ./ Vr, dxr ./ Vr);
phir    = atan((l*(ddyr.*dxr - ddxr.*dyr)) ./ Vr.^3);

% Computing references on z and virtual input w
zref = [xr + l*cos(thetar) + Delta*cos(thetar + phir);
        yr + l*sin(thetar) + Delta*sin(thetar + phir)];

etaref = [thetar; phir];

wref = zeros(2, numel(t));
len = numel(t);
wref = zeros(2, length(xr));
len = length(xr);
for i = 1:len
    s1        = sin(thetar(i) + phir(i)); 
    c1        = cos(thetar(i) + phir(i));
    M         = [cos(thetar(i)) - tan(phir(i))*(sin(thetar(i)) + Delta*s1/l), -Delta*s1;
                 sin(thetar(i)) + tan(phir(i))*(cos(thetar(i)) + Delta*c1/l),  Delta*c1];
    wref(:,i) = M * ur(:,i);
end


%% Constraints
rhat = min(Delta*l*10/sqrt(Delta*Delta + l*l), 1);

% Weights for cost function
Q = Q_val * eye(dz);
R = R_val * eye(du);
P = P_val * Q;
A = eye(dz);
B = Ts * eye(dz);

% ptsU = [];
% for tta = linspace(0,2*pi-1e-4,20)
%     ptsU = [ptsU; [rhat*cos(tta), rhat*sin(tta)]];
% end
% U_approx = Polyhedron('V',ptsU).computeVRep();

%% CasADi optimization
solver = casadi.Opti();

% Define optimization variables
z = solver.variable(dz, Npred + 1);
w = solver.variable(du, Npred);
eta = solver.variable(dz, Npred + 1);

% Define initial state as a parameter
zinit = solver.parameter(dz, 1);
etainit = solver.parameter(dz, 1);
zref_param = solver.parameter(dz, Npred+1);
wref_param = solver.parameter(du, Npred+1);
etaref_param = solver.parameter(dz, Npred + 1);

% Nonlinear dynamics 
f_dynamics = @(x, u) [ u(1) * cos(x(3));
                       u(1) * sin(x(3));
                       u(1)/l * tan(x(4));
                       u(2) ];

% Add initial state constraint
solver.subject_to(z(:, 1) == zinit);
solver.subject_to(eta(:, 1) == etainit);

% Add constraints and dynamics for each prediction step
for k = 1 : Npred
    % State update constraint using discretized nonlinear dynamics
    solver.subject_to(z(:, k+1) == A * z(:, k) + B * w(:, k));

    % Nonlinear dynamics constraints
    O = LinDyna(eta(:, k), l, Delta);
    solver.subject_to(eta(:, k+1) == eta(:, k) + Ts * O * w(:, k));
    
    % Control input constraints
    solver.subject_to(w(:, k)' * w(:, k) <= rhat);
    % solver.subject_to(U_approx.A*w(:, k) <= U_approx.b);
end

objective = 0;
for k = 1 : Npred
    objective = objective + (z(:, k) - zref_param(:, k))' * Q * (z(:, k) - zref_param(:, k)) + ...
                            (w(:, k) - wref_param(:, k))' * R * (w(:, k) - wref_param(:, k)); 
end

objective = objective + (z(:, Npred + 1) - zref_param(:, Npred + 1))' * P * (z(:, Npred + 1) - zref_param(:, Npred + 1));

%% Define the objective function
% Define the solver
options.ipopt.print_level = 0;
options.ipopt.sb= 'yes';
options.print_time = 0;

solver.minimize(objective)
solver.solver('ipopt', options)

% Simulation loop
usim = zeros(du, Nsim);
zsim = zeros(dz, Nsim);
etasim = zeros(dz, Nsim);
xsim = zeros(dx, Nsim);
wsim = zeros(du, Nsim);

zsim(:, 1) = z0;
xsim(:, 1) = x0;
etasim(:, 1) = eta0;
usim_init = u0;
tfin = [];
tcv = tic;
for i = 1 : Nsim
    solver.set_value(zinit, zsim(:, i))
    solver.set_value(etainit, etasim(:, i))

    if i < Nsim-Npred
        solver.set_value(zref_param, zref(:, i:i+Npred))
        solver.set_value(wref_param, wref(:, i:i+Npred))
        solver.set_value(etaref_param, etaref(:, i:i+Npred))
    else
        solver.set_value(zref_param, zref(:, i:i+Npred))
        solver.set_value(wref_param, wref(:, i:i+Npred))
        solver.set_value(etaref_param, etaref(:, i:i+Npred))
    end

    t1 = tic;
    sol = solver.solve();
    tfin = [tfin toc(t1)];
    wsol = sol.value(w);
    M = LinMatrix(xsim(3:4, i), Delta, l);

    usim(:, i) = M^(-1) * wsol(:, 1);
    wsim(:, i) = wsol(:, 1);

    xsim(:, i + 1) = xsim(:, i) + Ts * f_dynamics(xsim(:, i), usim(:, i));
    zsim(:, i + 1) = LinOutput(xsim(:, i+1), Delta, l);
    etasim(:, i + 1) = xsim(3:4, i+1);
end
taltcv = toc(tcv);
s2 = taltcv / (Nsim)

s = sum(tfin);
s = s/Nsim

err = zeros(dz,Nsim);
for i =1:Nsim
    err(:,i) = (zsim(:, i) - zref(:, i));
end

%% Plot results
figure
plot(xsim(1,:), xsim(2,:))
title('x_{sim}')
xlabel('x_1')
ylabel('x_2')
grid

figure
plot(zsim(1,:), zsim(2,:))
title("z_{sim}")
xlabel('z_1')
ylabel('z_2')
grid

figure
subplot(2,1,1)
plot(zsim(1,:))
xlabel('Nsim')
ylabel('z_1')
hold on
plot(zref(1,1:Nsim),'--')
legend('z_1','ref z_1')
xlabel('Nsim')
ylabel('z_1')
title('Simulation and reference for z1_{state}')
grid

subplot(2,1,2)
plot(zsim(2,:))
hold on
plot(zref(2,1:Nsim),'--')
xlabel('Nsim')
ylabel('z_2')
legend('z_2','ref z_2')
title('Simulation and reference for z2_{state}')
grid

figure
subplot(4,1,1)
plot(1:Nsim, xsim(1,1:end-1))
legend('x')
xlabel('time (s)')
grid

subplot(4,1,2)
plot(1:Nsim, xsim(2,1:end-1))
legend('y')
xlabel('time (s)')
grid

subplot(4,1,3)
plot(1:Nsim, xsim(3,1:end-1))
hold on 
plot(1:Nsim, thetar(1:Nsim), '--')
legend('$\theta$','interpreter','latex')
xlabel('time (s)')
grid

subplot(4,1,4)
plot(1:Nsim, xsim(4,1:end-1))
hold on 
plot(1:Nsim, phir(1:Nsim), '--')
legend('$\varphi$','interpreter','latex')
xlabel('time (s)')
grid

figure
subplot(2,1,1)
plot(usim(1, :))
legend('V')
xlabel('Nsim')
grid
subplot(2,1,2)
plot(usim(2, :))
legend('\omega')
xlabel('Nsim')
grid

figure
subplot(2,1,1)
plot(wsim(1, :))
legend('w1_{virtual}')
xlabel('Nsim')
grid
subplot(2,1,2)
plot(wsim(2, :))
legend('w2_{virtual}')
xlabel('Nsim')
grid

figure
plot(t(1:Nsim),err(1,:))
hold on
plot(t(1:Nsim),err(2,:))
legend('err_x', 'err_y')
title('Reference tracking error')
grid

figure
hold on
height = 0.4; width = 0.2;
st = 50;
% st = 10;
k=1;
while k < Nsim
   drawSteeringCar(xsim(:,k), l, height, width)
    k = k + st;
end
plot(xsim(1,:),xsim(2,:),'linewidth',2)

title('car position')

xlabel('x (m)')
ylabel('y (m)')

% figure
% plot(U_approx)
% xlabel('x(m)')
% ylabel('y(m)')
% title('Constraints on virtual input')

%%
% save('matrices.mat', 'Q', 'R', 'P', 'zsim', 'wsim', 'xsim', 'wref', 'ur', 'zref')