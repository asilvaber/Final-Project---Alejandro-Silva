%--------------------------------------------------------------------------
% THIS IS THE EXECUTABLE M-FILE FOR THE COMPUTATION OF THE FRD PLOTS OF THE
% SINGLE DEGREE OF FREEDOM NONLINEAR OSCILLATOR

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% OCTOBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

clear
clc

% Convergence factor for the Newton-Raphson loops, and numerical precision
% factor for the plotting
tol = 1e-6;

% Mass of the oscillator
m = 1;
% Damping coefficient
%c = tol;
c = 0.25;
% Stiffness coefficient
k = 1;

% Nonlinear stiffness coefficient
%beta = 0;
%beta = 0.1;
beta = 1;

% Forcing amplitude
fc = 1;

% Plotting options
% Frequency intervals, minimum and maximum frequency
fMin = 0;
fMax = 1/2;
% Number of discrete values taken from the frequency plotting interval for
% the FRD plotting
numPulsSamples = 200;
% Number of points taken as initial points for the Newton-Raphson loops per
% frequency value
numAmplSamples = 200;
% Plot y-axis limit
figVertLim = 5;
% Maximum coefficient value taken as initial value for the Newton-Raphson
% loops
aMax = 4;

% Maximum number of iteration for the N-R loops
maxIter = 1000;

% Natural pulsation of the linearized oscillator
natPuls = sqrt(eigs(k,m));

% Computation of the frequency response curves and modal backbones with
% Matlab functions

% tic
% [AmplitudeFR,AamplitudeFR,BamplitudeFR,PhaseAngleFR,W] = NewtonRaphsonFR1dof(tol,m,c,k,beta,fc,fMin,fMax,numAmplSamples,numPulsSamples,aMax,maxIter);
% [AmplitudeNMB] = NewtonRaphsonNMB1dof(tol,m,k,beta,aMax,maxIter,W);
% toc

% Computation of the frequency response curves and modal backbones with
% C MEX-files created with the Matlab assistant 'coder'.

tic
[AmplitudeFR,AamplitudeFR,BamplitudeFR,PhaseAngleFR,W] = NewtonRaphsonFR1dof_mex(tol,m,c,k,beta,fc,fMin,fMax,numAmplSamples,numPulsSamples,aMax,maxIter);
[AmplitudeNMB] = NewtonRaphsonNMB1dof_mex(tol,m,k,beta,aMax,maxIter,W);
toc

% Call to the m-file that displays the curves on the FRD and the phase
% angle plot
figures1dof

% Instructions to understand the graphical output in chapter two of the
% project text
