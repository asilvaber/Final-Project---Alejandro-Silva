%--------------------------------------------------------------------------
% THIS IS THE EXECUTABLE M-FILE FOR THE COMPUTATION OF THE FRD PLOTS OF THE
% TWO DEGREES OF FREEDOM NONLINEAR OSCILLATOR

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% OCTOBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

clear
clc

% Convergence factor for the Newton-Raphson loops, and numerical precision
% factor for the plotting
tol = 1e-6;

% Masses of the oscillator
m1 = 1;
m2 = 1;
% Damping coefficients
%c1 = tol;
c1 = 0.25;
c2 = tol;
% Stiffness coefficient
k1 = 1;
k2 = 1;

% Nonlinear stiffness coefficient
%beta = 0;
beta = 0.1;
%beta = 1;

% Forcing amplitude coefficients
fc11 = 1;
fc12 = 0;
fc21 = 0;
fc22 = 0;

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
figVertLim = 10;
% Maximum coefficient value taken as initial value for the Newton-Raphson
% loops
aMax = 3;

% Maximum number of iteration for the N-R loops
maxIter = 1000;

% Natural pulsation of the linearized oscillator
natPuls = sqrt(eigs([k1+k2 -k2; -k2 k2],[m1 0; 0 m2]));

% Computation of the frequency response curves and modal backbones with
% Matlab functions

% tic
% [Amplitude1FR,Amplitude2FR,A1amplitudeFR,A2amplitudeFR,B1amplitudeFR,B2amplitudeFR,W] = NewtonRaphsonFR2dof(tol,m1,m2,c1,c2,k1,k2,beta,fc11,fc12,fc21,fc22,fMin,fMax,numAmplSamples,numPulsSamples,aMax,maxIter);
% [Amplitude1NMB,Amplitude2NMB] = NewtonRaphsonNMB2dof(tol,m1,m2,k1,k2,beta,aMax,maxIter,W);
% toc

% Computation of the frequency response curves and modal backbones with
% C MEX-files created with the Matlab assistant 'coder'.

tic
[Amplitude1FR,Amplitude2FR,A1amplitudeFR,A2amplitudeFR,B1amplitudeFR,B2amplitudeFR,W] = NewtonRaphsonFR2dof_mex(tol,m1,m2,c1,c2,k1,k2,beta,fc11,fc12,fc21,fc22,fMin,fMax,numAmplSamples,numPulsSamples,aMax,maxIter);
[Amplitude1NMB,Amplitude2NMB] = NewtonRaphsonNMB2dof_mex(tol,m1,m2,k1,k2,beta,aMax,maxIter,W);
toc

% Call to the m-file that displays the curves on the FRDs
figures2dof

% Instructions to understand the graphical output in chapter two of the
% project text
