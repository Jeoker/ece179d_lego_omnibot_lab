%% Prelab 2A

% Init
%clear;
%clc;
run('init_lab2a.m');

% get the F matrix
[~, F] = get_J_F(r_w, L, phi_b, alpha);


% get the square trajectory
square_trajectory = get_traj_square(x_length, y_length, n);

% get the circle trajectory
circle_trajectory = get_traj_circle(radius, n);

% pick a trajectory
trajectory1 = circle_trajectory;
trajectory2 = square_trajectory;

% get velocities
[x_dot, y_dot] = get_velocities(trajectory1, delta_t);

% hold on;
% plot(1:length(x_dot), x_dot);
% plot(1:length(y_dot), y_dot, 'r');
% legend('x_dot', 'y_dot');
% hold off;

% get joint trajectory,velocity, acceleration
[q, q_dot, q_double_dot] = get_joint_traj(x_dot, y_dot, F, phi_dot, delta_t);
% clf;
% hold on;
%plot(1:length(q), q);
% plot(1:length(q_dot), q_dot);
% legend('q', 'q_dot');
% hold off;
