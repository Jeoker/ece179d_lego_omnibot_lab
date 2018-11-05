%% Prelab 2A

%% 2B)

function traj = get_traj_circle(radius, n)

angle = linspace(0, 2*pi, n*4);

for i = 1:1:length(angle)
    x(i) = radius*cos(angle(i));
    y(i) = radius*sin(angle(i));
end

traj = [x;y];
end