%%
clear; clc; close all;

B_A = [0 -1; -1 0; 0 1; 1 0]; 
B_b = [0; 0 ; 5; 10];

B = Polyhedron(B_A, B_b);

culori = ['c', 'y', 'r', 'b', 'm', 'k'];

%% iterations
c{1} = [1; 2.5]; c{2} = [4; 1]; c{3} = [2; 2]; c{4} = [2; 4]; c{5} = [8; 2.5]; c{6} = [5.5; 4];

K_MAX = 40;
NR_ROB = 5;

ck = cell(NR_ROB, K_MAX); 
rk = cell(NR_ROB, K_MAX); 
Vk = cell(NR_ROB, K_MAX);

for i = 1 : NR_ROB
    ck{i, 1} = c{i};
end

figure; hold on;
plot(B, 'Color', 'brown');

for k = 1 : (K_MAX-1)
    for j = 1 : NR_ROB 
        A=[B_A]; 
        b=[B_b];
        for i = 1 : NR_ROB
            if i ~= j
                A = [A; 2*(ck{i, k} - ck{j, k})'];
                b = [b; norm(ck{i, k}, 2)^2-norm(ck{j, k}, 2)^2]; 
            end
        end

        Vk{j, k} = Polyhedron(A, b);

        plot(Vk{j, k}, 'Color', culori(j))

        x = sdpvar(3, 1); 

        f = [0; 0; -1];
        objective= f' * x;
        constraints = [-x(3) <= 0];
        for i = 1 : size(A, 1)
           xi = x(1:2) + (1/norm(A(i,:))) * A(i, :)' * x(3);
           constraints = [constraints, A(i, :) * xi <= b(i),...
               sqrt((xi(1) - x(1))^2 + (xi(2) - x(2))^2) <= x(3)];
        end
        
        diagnostics = optimize(constraints, objective);
        x = double(x);

        xc{j} = x(1 : 2); 
        r{j} = x(3); 

        % store the values
        ck{j, k+1} = xc{j}; 
        c{j} = xc{j};
        rk{j, k+1} = r{j};
    end
end

% saveas(gcf, './final_6_poly', 'epsc');

%%
st = K_MAX;
figure()
hold on
plot(B);
for i = 1 : NR_ROB
    ellipplot(eye(2), rk{i, st}^2, 'b', ck{i, st})
    plot(ck{i, st}(1), ck{i, st}(2), '*')
end

%%
tol = 0.01;

figure; 
subplot(3,1,1); hold on; grid on;
title("Radius difference")
ylabel("r(i) - r_{KMAX}")
xlabel("timp")
% yline(tol, '-r', 'LineWidth', 1);

subplot(3,1,2); hold on; grid on;
title("c(1) difference")
ylabel("c1(i) - c1_{KMAX}")
xlabel("timp")
% yline(-tol, '-r', 'LineWidth', 1);
ylim([-2.3 0.1])

subplot(3,1,3); hold on; grid on;
title("c(2) difference")
ylabel("c2(i) - c2_{KMAX}")
xlabel("timp")
% yline(-tol, '-r', 'LineWidth', 1);
ylim([-2.3 0.1])

ok = -1;

for st = 2 : K_MAX
    if ok ~= -1
        break
    end
    for i = 1 : NR_ROB
        subplot(3,1,1); hold on; grid on;
        stem(st, rk{i, st} - rk{i, K_MAX});

        subplot(3,1,2); hold on; grid on;
        stem(st, ck{i, st}(1) - ck{i, K_MAX}(1));

        subplot(3,1,3); hold on; grid on;
        stem(st, ck{i, st}(2) - ck{i, K_MAX}(2));

        if ((abs(rk{i, st} - rk{i, K_MAX}) <= tol) && (abs(ck{i, st}(1) - ck{i, K_MAX}(1)) <= tol) && (abs(ck{i, st}(2) - ck{i, K_MAX}(2)) <= tol))
            ok = st;
        else
            ok = -1;
        end
    end
end

%%
figure; hold on;
plot(B, 'Color', 'brown')
for i = 1 : NR_ROB
    plot(Vk{i,1}, 'Color', culori(i))
end

