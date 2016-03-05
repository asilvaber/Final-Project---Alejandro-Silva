/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_NewtonRaphsonFR1dof_mex.c
 *
 * Code generation for function '_coder_NewtonRaphsonFR1dof_mex'
 *
 */

/* Include files */
#include "NewtonRaphsonFR1dof.h"
#include "_coder_NewtonRaphsonFR1dof_mex.h"
#include "NewtonRaphsonFR1dof_terminate.h"
#include "_coder_NewtonRaphsonFR1dof_api.h"
#include "NewtonRaphsonFR1dof_initialize.h"
#include "NewtonRaphsonFR1dof_data.h"

/* Function Declarations */
static void NewtonRaphsonFR1dof_mexFunction(int32_T nlhs, mxArray *plhs[5],
  int32_T nrhs, const mxArray *prhs[12]);

/* Function Definitions */
static void NewtonRaphsonFR1dof_mexFunction(int32_T nlhs, mxArray *plhs[5],
  int32_T nrhs, const mxArray *prhs[12])
{
  int32_T n;
  const mxArray *inputs[12];
  const mxArray *outputs[5];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 12) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 12, 4,
                        19, "NewtonRaphsonFR1dof");
  }

  if (nlhs > 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 19,
                        "NewtonRaphsonFR1dof");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  NewtonRaphsonFR1dof_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  NewtonRaphsonFR1dof_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(NewtonRaphsonFR1dof_atexit);

  /* Module initialization. */
  NewtonRaphsonFR1dof_initialize();

  /* Dispatch the entry-point. */
  NewtonRaphsonFR1dof_mexFunction(nlhs, plhs, nrhs, prhs);
}

/* End of code generation (_coder_NewtonRaphsonFR1dof_mex.c) */
