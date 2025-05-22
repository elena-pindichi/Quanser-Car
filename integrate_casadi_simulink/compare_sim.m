clc, close all, clear;

load('sim_flmpc.mat')
load('sim_nlmpc.mat')

len_t = min(size(out_flmpc,3), size(out_nlmpc,3));

nmpc    = [];
flmpc   = [];

for i = 1 : len_t
    nmpc    = [nmpc, out_nlmpc(:,:,i)];
    flmpc   = [flmpc, out_flmpc(:,:,i)];
end

t = 0 : 0.1 : len_t;

figure
plot(nmpc(1, :), nmpc(2,:))
hold on
plot(flmpc(1,:), flmpc(2,:))
grid
legend('NMPC', 'FLMPC')
title('Simulation Results Position')

figure
plot(t(1:len_t), nmpc(3,:))
hold on
plot(t(1:len_t), flmpc(3,:))
grid
legend('NMPC', 'FLMPC')
title('Simulation Results Yaw')

figure
plot(t(1:len_t), nmpc(4,:))
hold on
plot(t(1:len_t), flmpc(4,:))
grid
legend('NMPC', 'FLMPC')
title('Simulation Results SteeringAngle')

