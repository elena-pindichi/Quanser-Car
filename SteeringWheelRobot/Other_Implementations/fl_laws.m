function [T, phi_d, theta_d] = fl_laws(v, psi_ref)

    g = 9.81; m = 28 * 1e-3; 

    T = m * sqrt(v(1)^2 + v(2)^2 + (v(3) + g)^2);
    phi_d = asin(m * (v(1) * sin(psi_ref) - v(2) * cos(psi_ref)) / T);
    theta_d = atan2(v(1) * cos(psi_ref) + v(2) * sin(psi_ref), v(3) + g);
end