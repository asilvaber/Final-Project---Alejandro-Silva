@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2015a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2015a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=NewtonRaphsonNMB2dof_mex
set MEX_NAME=NewtonRaphsonNMB2dof_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for NewtonRaphsonNMB2dof > NewtonRaphsonNMB2dof_mex.mki
echo COMPILER=%COMPILER%>> NewtonRaphsonNMB2dof_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> NewtonRaphsonNMB2dof_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> NewtonRaphsonNMB2dof_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> NewtonRaphsonNMB2dof_mex.mki
echo LINKER=%LINKER%>> NewtonRaphsonNMB2dof_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> NewtonRaphsonNMB2dof_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> NewtonRaphsonNMB2dof_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> NewtonRaphsonNMB2dof_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> NewtonRaphsonNMB2dof_mex.mki
echo BORLAND=%BORLAND%>> NewtonRaphsonNMB2dof_mex.mki
echo OMPFLAGS= >> NewtonRaphsonNMB2dof_mex.mki
echo OMPLINKFLAGS= >> NewtonRaphsonNMB2dof_mex.mki
echo EMC_COMPILER=msvcsdk>> NewtonRaphsonNMB2dof_mex.mki
echo EMC_CONFIG=optim>> NewtonRaphsonNMB2dof_mex.mki
"C:\Program Files\MATLAB\R2015a\bin\win64\gmake" -B -f NewtonRaphsonNMB2dof_mex.mk
