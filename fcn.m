function [ref_cur, ref_dcur] = fcn(traj_in, dtraj_in, t_in, Ts_traj)
t_offset = 1;   %amt of seconds to wait before starting traj

base_numPts_per_sec = length(traj_in)/(Ts_traj*length(traj_in));
scaleFactor = 1; %Time scaling factor (# of trajectory points per second multiplier)
%Tweaking this will speed-up or slow-down the playback of traj, allowing
%for some control over resolution.
scaling = scaleFactor*base_numPts_per_sec; 
t_cur = t_in-t_offset;
time = max(t_cur,0);
%Compute the current index in the trajectory array
index_fraction = scaling*time + 1;
index = floor(index_fraction);
frac_add = index_fraction - index; % additional amount "beyond" index
%Extract the current position from the trajectory (plus interp)
if (index < length(traj_in))
    
    theta_out = (1-frac_add)*double(traj_in(index)) + ...
        frac_add*double(traj_in(index+1));
    
    dtheta_out = (1-frac_add)*double(dtraj_in(index)) + ...
        frac_add*double(dtraj_in(index+1));
    
else %If we run out of data, continue outputting the last value
    theta_out = double(traj_in(length(traj_in)));
    dtheta_out = double(dtraj_in(length(dtraj_in)));
end
ref_cur = theta_out;
ref_dcur = dtheta_out;




end