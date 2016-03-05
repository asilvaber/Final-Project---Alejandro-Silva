/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_NewtonRaphsonFR2dof_mex.c
 *
 * Code generation for function '_coder_NewtonRaphsonFR2dof_mex'
 *
 */

/* Include files */
#include "NewtonRaphsonFR2dof.h"
#include "_coder_NewtonRaphsonFR2dof_mex.h"
#include "NewtonRaphsonFR2dof_terminate.h"
#include "_coder_NewtonRaphsonFR2dof_api.h"
#include "NewtonRaphsonFR2dof_initialize.h"
#include "NewtonRaphsonFR2dof_data.h"

/* Function Declarations */
static void NewtonRaphsonFR2dof_mexFunction(int32_T nlhs, mxArray *plhs[7],
  int32_T nrhs, const mxArray *prhs[18]);

/* Function Definitions */
static void NewtonRaphsonFR2dof_mexFunction(int32_T nlhs, mxArray *plhs[7],
  int32_T nrhs, const mxArray *prhs[18])
{
  int32_T n;
  const mxArray *inputs[18];
  const mxArray *outputs[7];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 18) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 18, 4,
                        19, "NewtonRaphsonFR2dof");
  }

  if (nlhs > 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 19,
                        "NewtonRaphsonFR2dof");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  NewtonRaphsonFR2dof_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  NewtonRaphsonFR2dof_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(NewtonRaphsonFR2dof_atexit);

  /* Module initialization. */
  NewtonRaphsonFR2dof_initialize();

  /* Dispatch the entry-point. */
  NewtonRaphsonFR2dof_mexFunction(nlhs, plhs, nrhs, prhs);
}

/* End of code generation (_coder_NewtonRaphsonFR2dof_mex.c) */
