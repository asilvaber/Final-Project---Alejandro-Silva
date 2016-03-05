/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_NewtonRaphsonNMB2dof_mex.c
 *
 * Code generation for function '_coder_NewtonRaphsonNMB2dof_mex'
 *
 */

/* Include files */
#include "NewtonRaphsonNMB2dof.h"
#include "_coder_NewtonRaphsonNMB2dof_mex.h"
#include "NewtonRaphsonNMB2dof_terminate.h"
#include "_coder_NewtonRaphsonNMB2dof_api.h"
#include "NewtonRaphsonNMB2dof_initialize.h"
#include "NewtonRaphsonNMB2dof_data.h"

/* Function Declarations */
static void c_NewtonRaphsonNMB2dof_mexFunct(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[9]);

/* Function Definitions */
static void c_NewtonRaphsonNMB2dof_mexFunct(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[9])
{
  int32_T n;
  const mxArray *inputs[9];
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 9, 4,
                        20, "NewtonRaphsonNMB2dof");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "NewtonRaphsonNMB2dof");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  NewtonRaphsonNMB2dof_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  NewtonRaphsonNMB2dof_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(NewtonRaphsonNMB2dof_atexit);

  /* Module initialization. */
  NewtonRaphsonNMB2dof_initialize();

  /* Dispatch the entry-point. */
  c_NewtonRaphsonNMB2dof_mexFunct(nlhs, plhs, nrhs, prhs);
}

/* End of code generation (_coder_NewtonRaphsonNMB2dof_mex.c) */
