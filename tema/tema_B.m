%% Exercitiul 3.1.
clc; clear; close all;

A = [1 0.2; 0 0.1];
B = [0; 1];
C = [0.6 -0.2];

Ts = 1;
[n, m] = size(B);
p = size(C, 1);

x0 = [-5; 4];

Q = 1 .* eye(n);
R = 1 .* eye(m);

[X, K, Clp] = idare(A, B, Q, R);
K = -K;
cl = ss(A + B * K, [0; 0], C, 0, Ts); 

eig(cl.A)

initial(cl, x0);
grid on

%%
Npred = 50;
Nsim = 60;                          

[y_ini, t_ini] = initial(cl, x0, Nsim - 1);

figure; 
stem(t_ini, y_ini)
grid on;
title("Response to initial conditions");
xlabel('Time (seconds)');
ylabel('Amplitude')

%% UNCONSTRAINED MPC
u = sdpvar(repmat(m, 1, Npred), ones(1, Npred));         
x = sdpvar(repmat(n, 1, Npred+1), ones(1, Npred+1));  

constraints = [];
objective = 0;
for k = 1 : Npred
    x{k+1} = A * x{k} + B * u{k};
    objective = objective +  x{k}' * Q * x{k} + u{k}' * R * u{k}; 
end

options = sdpsettings('verbose', 2);
controller = optimizer(constraints, objective, options, x{1}, u{1});

%% Simulare
x_sim = {[-5; 4]};
u_sim = {};
y_sim = {};
figure; 
subplot(2,1,1); hold on; grid on;
stem(1, x_sim{1}(1))

subplot(2,1,2); hold on; grid on;
stem(1, x_sim{1}(2))

for i = 1 : Nsim
    u_sim{i} = controller(x_sim{i});
    x_sim{i + 1} = A * x_sim{i} + B * u_sim{i};
    y_sim{i} = C * x_sim{i};
    
    subplot(2,1,1); hold on; grid on;
    stem(i+1, x_sim{i+1}(1))
    
    subplot(2,1,2)
    stem(i+1, x_sim{i+1}(2))
end

subplot(2,1,1);
title('x1');
ylabel('x1');
xlabel('timp');
xlim([0, Nsim+1])

subplot(2,1,2);
title('x2');
ylabel('x2');
xlabel('timp');
xlim([0, Nsim+1])

figure; hold on; grid on; title("Evolutia iesirii")
for i = 1 : size(y_sim, 2)
    stem(i-1, y_sim{i});
end
xlabel('timp');
ylabel('y');
xlim([0, Nsim+1])


y_ini-[y_sim{1:end}]'

%% 
u = sdpvar(repmat(m, 1, Npred), ones(1, Npred));         
x = sdpvar(repmat(n, 1, Npred+1), ones(1, Npred+1));  

P = 10 .* eye(n);
constraints = [];
objective = 0;
for k = 1 : Npred
    x{k+1} = A * x{k} + B * u{k};
    if k > 1
        objective = objective +  x{k-1}' * Q * x{k-1} + u{k-1}' * R * u{k-1}; 
    end
end
objective = objective + x{end}' * P * x{end};

options = sdpsettings('verbose', 2);
controller = optimizer(constraints, objective, options, x{1}, u{1});

% saveas(gcf, 'terminal_cost', 'epsc');


