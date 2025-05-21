clc, clear all, close all;
import casadi.*;
addpath(genpath('tools'))
load("trajectory.mat")

%% Parameters
N_pred_val = 5;                      % Prediction horizon
Q_val = 20;                          % State weight value
R_val = 1;                           % Input weight value
P_val = 100;                         % Terminal state value
l = 0.256;                           % Length between front and rear
Delta = 0.35;                        % Distance in front of the car

% Define prediction and simulation steps
Ts = 0.3;                            % Sampling time
Npred = N_pred_val;                  % Prediction horizon
Nsim =  400;                          % Number of simulation steps

% Define system dimensions
dx = 4;                              % State dimensions: x, y, theta
du = 2;                              % Control dimensions: V, omega
dz = 2;

% Initial condition and references
x0 = [0; 2.5; 0; pi/3];              % Initial state [x; y; theta; phi]
z0 = LinOutput(x0, Delta, l);
u0 = zeros(du, 1);

%% Trajectories
% Time
t = 0 : 0.1 : 50;

% % % % % % % % % % % % % % % % % 
% Line reference
alpha   = 0.5;
beta    = 0.8;
xr = alpha * t;     dxr = alpha + 0*t;    ddxr = 0 + 0*t;   dddxr = 0 + 0*t;
yr = beta * t;      dyr = beta + 0*t;     ddyr = 0 + 0*t;   dddyr = 0 + 0*t;

% Stairs trajectory
st = zeros(1,length(t))+[2*ones(1, 100), 5*ones(1,300), 4*ones(1, length(t)-400)];
xr = t;     dxr = 1 + 0*t;     ddxr = 0 + 0*t;   dddxr = 0 + 0*t;
yr = st;    dyr = 0 + 0*t;     ddyr = 0 + 0*t;   dddyr = 0 + 0*t;

% Circle reference
alpha   = 5;
beta    = 5;
ang     = 0.2;
xr = alpha*cos(ang*t);      dxr = -alpha*ang*sin(ang*t);    ddxr = -alpha*ang*ang*cos(ang*t);       dddxr = alpha*ang*ang*ang*sin(ang*t);
yr = beta*sin(ang*t);       dyr = beta*ang*cos(ang*t);      ddyr = -beta*ang*ang*sin(ang*t);        dddyr = -beta*ang*ang*ang*cos(ang*t);

% Spline reference
% xr = xref;      dxr = dxref;        ddxr = ddxref;      dddxr = dddxref;
% yr = yref;      dyr = dyref;        ddyr = ddyref;      dddyr = dddyref;
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

ptsU = [];
for tta = linspace(0,2*pi-1e-4,20)
    ptsU = [ptsU; [rhat*cos(tta), rhat*sin(tta)]];
end
U_approx = Polyhedron('V',ptsU).computeVRep();

%% CasADi optimization
solver = casadi.Opti();

% Define optimization variables
z = solver.variable(dz, Npred + 1);
w = solver.variable(du, Npred);

% Define initial state as a parameter
zinit = solver.parameter(dz, 1);

% Nonlinear dynamics 
f_dynamics = @(x, u) [ u(1) * cos(x(3));
                       u(1) * sin(x(3));
                       u(1)/l * tan(x(4));
                       u(2) ];

% Add initial state constraint
solver.subject_to(z(:, 1) == zinit);

% Add constraints and dynamics for each prediction step
for k = 1 : Npred
    % State update constraint using discretized nonlinear dynamics
    solver.subject_to(z(:, k+1) == A * z(:, k) + B * w(:, k));
    
    % Control input constraints
    solver.subject_to(w(:, k)' * w(:, k) <= rhat);
    % solver.subject_to(U_approx.A*w(:, k) <= U_approx.b);
end

%% Define the objective function
% Define the solver
options.ipopt.print_level = 0;
options.ipopt.sb= 'yes';
options.print_time = 0;

% Simulation loop
usim = zeros(du, Nsim);
zsim = zeros(dz, Nsim);
xsim = zeros(dx, Nsim);
wsim = zeros(du, Nsim);

zsim(:, 1) = z0;
xsim(:, 1) = x0;
usim_init = u0;

for i = 1 : Nsim
    objective = 0;
    for k = 1 : Npred
        objective = objective + (z(:, k) - zref(:, i + k - 1))' * Q * (z(:, k) - zref(:, i + k - 1)) + ...
                                 (w(:, k) - wref(:, i + k - 1))' * R * (w(:, k) - wref(:, i + k - 1));
    end

    objective = objective + (z(:, Npred + 1) - zref(:, i + Npred))' * P * (z(:, Npred + 1) - zref(:, i + Npred));

    solver.minimize(objective)
    solver.solver('ipopt', options)
    solver.set_value(zinit, zsim(:, i))
    sol = solver.solve();

    wsol = sol.value(w);
    M = LinMatrix(xsim(3:4, i), Delta, l);

    usim(:, i) = M^(-1) * wsol(:, 1);
    wsim(:, i) = wsol(:, 1);

    xsim(:, i + 1) = xsim(:, i) + Ts * f_dynamics(xsim(:, i), usim(:, i));
    zsim(:, i + 1) = LinOutput(xsim(:, i+1), Delta, l);
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
hold on
plot(zref(1,1:Nsim),'--')
legend('z_1','ref z_1')
grid

subplot(2,1,2)
plot(zsim(2,:))
hold on
plot(zref(2,1:Nsim),'--')
legend('z_2','ref z_2')
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
legend('$\theta$','interpreter','latex')
xlabel('time (s)')
grid

subplot(4,1,4)
plot(1:Nsim, xsim(4,1:end-1))
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
hold on
height = 0.4; width = 0.2;
st = 50;
k=1;
while k < Nsim
   drawSteeringCar(xsim(:,k), l, height, width)
    k = k + st;
end
plot(xsim(1,:),xsim(2,:),'linewidth',2)

title('car position')

xlabel('x (m)')
ylabel('y (m)')

figure
plot(U_approx)
title('Constraints on virtual input')