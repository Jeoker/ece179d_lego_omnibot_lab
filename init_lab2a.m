%% Prelab 2A

%% Init file
r_w = 0.032;
L = 0.146;
alpha = (2*pi/3)*[-1 0 1];

phi_b = pi/6;
n = 25; %amount of points
x_length = 1;
y_length = x_length;
delta_t = 0.2;

phi_dot = zeros(1, 4*n);
radius = 0.5;