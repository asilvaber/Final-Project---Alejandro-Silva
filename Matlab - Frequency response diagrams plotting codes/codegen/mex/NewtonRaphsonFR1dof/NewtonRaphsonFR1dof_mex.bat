@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2015a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2015a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=NewtonRaphsonFR1dof_mex
set MEX_NAME=NewtonRaphsonFR1dof_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for NewtonRaphsonFR1dof > NewtonRaphsonFR1dof_mex.mki
echo COMPILER=%COMPILER%>> NewtonRaphsonFR1dof_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> NewtonRaphsonFR1dof_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> NewtonRaphsonFR1dof_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> NewtonRaphsonFR1dof_mex.mki
echo LINKER=%LINKER%>> NewtonRaphsonFR1dof_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> NewtonRaphsonFR1dof_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> NewtonRaphsonFR1dof_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> NewtonRaphsonFR1dof_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> NewtonRaphsonFR1dof_mex.mki
echo BORLAND=%BORLAND%>> NewtonRaphsonFR1dof_mex.mki
echo OMPFLAGS= >> NewtonRaphsonFR1dof_mex.mki
echo OMPLINKFLAGS= >> NewtonRaphsonFR1dof_mex.mki
echo EMC_COMPILER=msvcsdk>> NewtonRaphsonFR1dof_mex.mki
echo EMC_CONFIG=optim>> NewtonRaphsonFR1dof_mex.mki
"C:\Program Files\MATLAB\R2015a\bin\win64\gmake" -B -f NewtonRaphsonFR1dof_mex.mk
