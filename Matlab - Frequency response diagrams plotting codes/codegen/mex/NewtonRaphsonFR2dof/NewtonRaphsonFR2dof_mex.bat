@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2015a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2015a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=NewtonRaphsonFR2dof_mex
set MEX_NAME=NewtonRaphsonFR2dof_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for NewtonRaphsonFR2dof > NewtonRaphsonFR2dof_mex.mki
echo COMPILER=%COMPILER%>> NewtonRaphsonFR2dof_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> NewtonRaphsonFR2dof_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> NewtonRaphsonFR2dof_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> NewtonRaphsonFR2dof_mex.mki
echo LINKER=%LINKER%>> NewtonRaphsonFR2dof_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> NewtonRaphsonFR2dof_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> NewtonRaphsonFR2dof_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> NewtonRaphsonFR2dof_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> NewtonRaphsonFR2dof_mex.mki
echo BORLAND=%BORLAND%>> NewtonRaphsonFR2dof_mex.mki
echo OMPFLAGS= >> NewtonRaphsonFR2dof_mex.mki
echo OMPLINKFLAGS= >> NewtonRaphsonFR2dof_mex.mki
echo EMC_COMPILER=msvcsdk>> NewtonRaphsonFR2dof_mex.mki
echo EMC_CONFIG=optim>> NewtonRaphsonFR2dof_mex.mki
"C:\Program Files\MATLAB\R2015a\bin\win64\gmake" -B -f NewtonRaphsonFR2dof_mex.mk
