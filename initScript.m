Ts = 5E-3;

Ts_traj = .2;

tau = .05;
cttf = tf([1 0], [tau 1]);
dttf = c2d(cttf, Ts, 'tustin');

cttf2 = tf([1], [1 0]);
itf = c2d(cttf2, Ts, 'tustin');

KpA = 100;
KdA = 1;
KiA = 5;

KpB = 100;
KdB = 1;
KiB = 5;

KpC = 100;
KdC = 1;
KiC = 5;

traj_A = q(1,1:end);
traj_dA = q_dot(1,1:end);

traj_B = q(2,1:end);
traj_dB = q_dot(2,1:end);

traj_C = q(3,1:end);
traj_dC = q_dot(3,1:end);