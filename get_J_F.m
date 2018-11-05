%% Prelab 2A

%% 1A) and 1B)
% Finding the Jacobian
function [J, F] = get_J_F(r_w, L, phi_b, alpha)

    F = (1/r_w)*[   sin(phi_b + alpha(1)) -cos(phi_b + alpha(1)) -L;
                    sin(phi_b + alpha(2)) -cos(phi_b + alpha(2)) -L;
                    sin(phi_b + alpha(3)) -cos(phi_b + alpha(3)) -L;];
    J = inv(F);
end
