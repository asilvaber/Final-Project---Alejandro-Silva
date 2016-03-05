% User Display for "NNM Plot" button:
% Inputs:
% - x is the response (state vector) of the system over one time period
% x(1:end/2,:), displacements (time evolution);
% x(end/2+1:end,:), velocities (time evolution);
% - t, time vector.

figure
% Motion in configuration space
plot(x(1,:),x(2,:))
xlabel('x_1')
ylabel('x_2')