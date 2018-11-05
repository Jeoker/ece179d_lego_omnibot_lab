%% Prelab 2A

%% 2A)

function [q, q_dot, q_double_dot] = get_joint_traj(x_dot, y_dot, F, phi_dot, delta_t)

q_dot = zeros(3, length(x_dot));
q = zeros(3, length(q_dot));

for j=2:1:length(x_dot)
    q_dot(1:3, j) = F*[x_dot(j); y_dot(j); phi_dot(j)];
    q(1:3, j) = (q_dot(1:3, j)+q_dot(1:3, j-1))*delta_t/2+ q(1:3, j-1);
    if (j < length(x_dot))
        q_double_dot(1:3, j) = (q_dot(1:3, j+1) - q_dot(1:3, j))/delta_t;
    end
end
end