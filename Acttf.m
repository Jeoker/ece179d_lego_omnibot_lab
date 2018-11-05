%continous time low pass filter
tau = 0.05;
tau_2 = 0.5;
cttf = tf([1 0],[tau_2 1]);
dttf = c2d(cttf, Ts, 'tustin')
dtheta = filter(dttf.num{:}, dttf.den{:}, simout_A.signals.values);


%subplot(2,1,1), plot(simout_u_A.time, theta_dot);
%legend('unfiltered');
%subplot(2,1,2), plot(simout_u_A.time, dtheta);
%legend('filtered');

hold on
plot(simout_u_A.time, theta_dot);
plot(simout_u_A.time, dtheta,'r', 'LineWidth',3);
legend('unfiltered','filtered');

%%
hold on
plot(simout_A_PD_response.time, simout_A_PD_response.signals.values);
plot(simout_u_PD_input.time, simout_u_PD_input.signals.values,'r', 'LineWidth',3);
legend('response','ramp input');
hold off;
%%

hold on
plot(simout_A_PD_response.time, simout_A_PD_response.signals.values);
plot(simout_u_PD_input.time, simout_u_PD_input.signals.values,'r', 'LineWidth',3);
legend('response','step input');
hold off;

%%
hold on
plot(simout_A_angle.time, simout_A_angle.signals.values);
plot(simout_B_angle.time, simout_B_angle.signals.values,'r', 'LineWidth',3);
legend('A angle','B angle');
hold off;
