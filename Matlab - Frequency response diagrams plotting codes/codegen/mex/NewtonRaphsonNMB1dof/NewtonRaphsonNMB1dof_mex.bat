@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2015a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2015a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=NewtonRaphsonNMB1dof_mex
set MEX_NAME=NewtonRaphsonNMB1dof_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for NewtonRaphsonNMB1dof > NewtonRaphsonNMB1dof_mex.mki
echo COMPILER=%COMPILER%>> NewtonRaphsonNMB1dof_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> NewtonRaphsonNMB1dof_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> NewtonRaphsonNMB1dof_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> NewtonRaphsonNMB1dof_mex.mki
echo LINKER=%LINKER%>> NewtonRaphsonNMB1dof_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> NewtonRaphsonNMB1dof_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> NewtonRaphsonNMB1dof_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> NewtonRaphsonNMB1dof_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> NewtonRaphsonNMB1dof_mex.mki
echo BORLAND=%BORLAND%>> NewtonRaphsonNMB1dof_mex.mki
echo OMPFLAGS= >> NewtonRaphsonNMB1dof_mex.mki
echo OMPLINKFLAGS= >> NewtonRaphsonNMB1dof_mex.mki
echo EMC_COMPILER=msvcsdk>> NewtonRaphsonNMB1dof_mex.mki
echo EMC_CONFIG=optim>> NewtonRaphsonNMB1dof_mex.mki
"C:\Program Files\MATLAB\R2015a\bin\win64\gmake" -B -f NewtonRaphsonNMB1dof_mex.mk
