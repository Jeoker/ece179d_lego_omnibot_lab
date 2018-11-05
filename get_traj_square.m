%% Prelab 2A

%% 2A)
function traj = get_traj_square(x_length, y_length, n)

width = x_length; %square height
height = y_length; %quare width
    
%first segment of the square
x1 = linspace(0, width, n);
y1 = zeros(1,n);
    
%second segment of the square
x2 = linspace(width, width, n);
y2 = linspace(0, height, n);

%third segment of the quare
x3 = linspace(width, 0, n);
y3 = linspace(height, height, n);

%last segment of the quare
x4 = zeros(1,n);
y4 = linspace(height,0,n);

x = [x1 x2 x3 x4];
y = [y1 y2 y3 y4];

traj = [x; y];
end
