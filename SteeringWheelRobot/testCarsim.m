clc
clear
close all
addpath(genpath('tools'))
%% Generate some weird reference
Ts = 0.01; %sampling time (sec)
tsim = 50; %simulation time 
tt = 0:Ts:tsim;
z1_r = 5*cos(0.2*tt); dotz1_r = -0.2*5*sin(0.2*tt); 
z2_r = 5*sin(0.2*tt); dotz2_r = 0.2*5*cos(0.2*tt);
%% model and simulation setup
L = 0.256; %m
Delta = 0.35; %m
q0 = [0;2.5;0;pi/3]; %initial state
z0 = LinOutput(q0,Delta,L);
q_sim = q0;
u_sim = [];
w_sim = [];
z_sim = z0;

K = 1; %some propotion control gain
for i = 1:numel(tt)
    w = [dotz1_r(i)+K*(z1_r(i)-z_sim(1,i));
         dotz2_r(i)+K*(z2_r(i)-z_sim(2,i))]; %PD controller
    M = LinMatrix(q_sim(3:4,i), Delta, L);
    u = M^(-1)*w;
    q_sim(:,i+1) = q_sim(:,i) + Ts*SteeringCar(q_sim(:,i),u,L); %simulation model
    z_sim(:,i+1) = LinOutput(q_sim(:,i+1),Delta,L);
    u_sim = [u_sim, u];
    w_sim = [w_sim, w];
end

%% plot results
% virtual output tracking plot
figure
subplot(2,1,1)
plot(z_sim(1,:))
hold on
plot(z1_r,'--')
legend('z_1','ref z_1')

subplot(2,1,2)
plot(z_sim(2,:))
hold on
plot(z2_r,'--')
legend('z_2','ref z_2')


% Real states
figure
subplot(4,1,1)
plot(tt, q_sim(1,1:end-1))
legend('x')
xlabel('time (s)')

subplot(4,1,2)
plot(tt, q_sim(2,1:end-1))
legend('y')
xlabel('time (s)')

subplot(4,1,3)
plot(tt, q_sim(3,1:end-1))
legend('$\theta$','interpreter','latex')
xlabel('time (s)')

subplot(4,1,4)
plot(tt, q_sim(4,1:end-1))
legend('$\varphi$','interpreter','latex')
xlabel('time (s)')

figure
plot(q_sim(1,:),q_sim(2,:))
title('car position')
xlabel('x (m)')
ylabel('y (m)')


