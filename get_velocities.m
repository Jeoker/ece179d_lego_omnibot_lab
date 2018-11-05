%%Prelab 2A

%%2A)
function [x_dot, y_dot] = get_velocities(traj, delta_t)

x_dot = zeros(1, length(traj));
y_dot = zeros(1, length(traj));

for i = 2:1:length(traj)
    x_dot(i) = (traj(1, i) - traj(1, i-1))/delta_t;
    y_dot(i) = (traj(2, i) - traj(2, i-1))/delta_t;
end
% figure(1);
% plot(1:length(x_dot), x_dot);
% hold on;
% plot(1:length(x_dot), smooth(x_dot, 'loess'), 'r');
% hold off;

end