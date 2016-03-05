%--------------------------------------------------------------------------
% THIS IS THE EXECUTABLE M-FILE FOR THE COMPUTATION OF THE NNMS BRANCHES 
% FROM A MODEL CONTAINED IN THE 'MODELS' FILE

% WRITTEN BY ALEJANDRO SILVA, asilvaber@gmail.com

% DECEMBER 2015, MADRID, SPAIN
%--------------------------------------------------------------------------

%--------------------------------------------------------------------------
% THE PARAMETERS ON THIS FILE ARE SET FOR THE COMPUTATION OF THE FIRST MODE
% NNMS BRANCH OF THE SNAPTHROUGH ABSORBER MODEL
%--------------------------------------------------------------------------

clear
clc

% INPUT PARAMETERS FOR THE COMPUTATION OF THE SECOND MODE OF THE
% SNAPTHROUGH ABSORBER

% Relative differentiation interval 'h' for the calculations of the
% jacobians with finite differences
RelDifferInt = 1e-7;
% Initial frequency stepsize for the predictor phase
InitFreqStep = -1e-7;
% Maximum frequency stepsize for the predictor phase
MaxFreqStep = 1e-7;
% Minimum frequency stepsize for the predictor phase
MinFreqStep = 1e-99;
% Maximum number of NNMs to be obtained (first stopping condition)
MaxPtsCurve = 10;
% Maximum energy of the NNMs computed (second stopping condition)
MaxEnergy = 1e7;
% Maximum frequency of the NNMs computed (third stopping condition)
MaxFreq = 1;
% Maximum number of calculations of a jacobian matrix during the
% Newton-Raphson loop in the corrector phase
NumJacCalc = 5;
% Relative error tolerance of the solution obtained from the Newton-Raphson 
% loop in the corrector phase (convergence condition)
ConvErrTol = 1e-5;
% Optimal ('average') number of iterations of the Newton-Raphson loop in
% the corrector phase
AverageIter = 10;
% Maximum number of iterations of the Newton-Raphson loop in the corrector
% phase
MaxIter = 15;
% Symmetry condition of the NNMs computed (1 = 'yes', 0 = 'no')
Symmetry = 0;
% Runge-Kutta relative tolerances for the shooting function and jacobians
% calculation, respectively
ShootRKRelTol = 1e-10;
JacobRKRelTol = 1e-12;
% Runge-Kutta absolute tolerances for the shooting function and jacobians
% calculation, respectively
ShootRKAbsTol = 1e-12;
JacobRKAbsTol = 1e-15;
% Degrees of freedom whose displacements are to be set to zero as a phase
% condition (indeces from 1 to the total number of dofs)
PhaseCondCoor = [ 1 ];

% Mat-file name where numerical results are save
matFile = 'NNModes_2.mat';

% The initial point is the NumMod-th linear normal mode of the linearized 
% system, with y0 = (x0, v0) as modal shape and freq0 as natural frequency
NumMod = 2;
[y0,freq0] = initpoint(NumMod,1e-5);

% IF THE INITIAL POINT IS TAKEN FROM A CURVE CONTAINED IN A MAT-FILE
% UNCOMMENT THE FOLLOWING PARAMETER DEFINITIONS

% 'pt' is the index of the NNM taken from the mat-file as the initial point 
% of a new branch

% load 'NNMmodes_2.mat'
% pt = 6;
% y0 = y11(pt,:);
% freq0 = freq11(pt);
% InitFreqStep = FreqStep(pt);
% MaxFreqStep = 1e-5;
% MinFreqStep = 1e-99;
% MaxPtsCurve = 5;
% MaxEnergy = 1e7;
% MaxFreq = 1;
% NumJacCalc = 5;
% ConvErrTol = 1e-5;
% AverageIter = 10;
% MaxIter = 15;
% Symmetry = 0;
% ShootRKRelTol = 1e-10;
% JacobRKRelTol = 1e-12;
% ShootRKAbsTol = 1e-12;
% JacobRKAbsTol = 1e-15;
% PhaseCondCoor = [ 1 ];
% matFile = 'NNModes_2_p.mat';


% CALL TO FUNCTION 'CURVECOMPUTATION' FOR THE NNMS BRANCH COMPUTATION

[y11,freq11,Energy,FloqMult,y01,freq01,TangVect,FreqStep,NumIter,ConvRelErr] = curvecomputation(y0,freq0,RelDifferInt,InitFreqStep,MaxFreqStep,MinFreqStep,MaxPtsCurve,MaxEnergy,MaxFreq,NumJacCalc,ConvErrTol,AverageIter,MaxIter,Symmetry,ShootRKRelTol,JacobRKRelTol,ShootRKAbsTol,JacobRKAbsTol,PhaseCondCoor);

% OUTPUTS

% y11: state vector with displacement 'x' and velocity 'v', (x, v), of each
% NNM calculated by the algorithm, under a certain phase condition
% freq11: frequency of each NNMs
% Energy: total energy of each NNM
% FloqMult: Floquet multipliers calculated for each NNM
% y01: state vector of a new point given by each predictor phase
% freq01: frequency of a new point given by each predictor phase
% TangVect: Tangent vector calculated in each predictor phase
% FreqStep: Frequency stepsize of each predictor phase
% NumIter: Number of iterations of each corrector phase
% ConvRelErr: relative Newton-Raphson error archieve during each corrector
% phase

% RESULTS ARE SAVED

save(matFile)
