function [tau] = run_att_PD(state_eta, angle_refs, angular_acc_ref, ref_angle_ddot)
    
    Kp_att = diag([40, 40, 40]);
    Kd_att = diag([20, 20, 20]);

         
    I_BF = diag([1.4, 1.4, 2.2]) .* 1e-5; 

    W = @(eta) [1 0 -sin(eta(2)); 
            0 cos(eta(1)) sin(eta(1)) * cos(eta(2));
            0 -sin(eta(1)) cos(eta(1)) * cos(eta(2))];

    W_dot = @(eta, rates) [1      0            -cos(eta(2)) * rates(2);
                       0 -sin(eta(1)) * rates(1)  cos(eta(1)) * rates(1) * cos(eta(2)) - sin(eta(1)) * sin(eta(2)) * rates(2);
                       0 -cos(eta(1)) * rates(1) -sin(eta(1)) * rates(1) * cos(eta(2)) + cos(eta(1)) * sin(eta(2)) * rates(2)];


    e_att = angle_refs - state_eta(1:3);
    e_dot_att = angular_acc_ref - state_eta(4:6);

    sigma = ref_angle_ddot + Kp_att * e_att + Kd_att * e_dot_att;
    
    % Compute Torque
    angle = state_eta(1:3); ang_vel = state_eta(4:6);
    tau = I_BF * W(angle) * sigma + I_BF * W_dot(angle, ang_vel) * ang_vel + cross(W(angle) * ang_vel, I_BF * W(angle) * ang_vel);

end