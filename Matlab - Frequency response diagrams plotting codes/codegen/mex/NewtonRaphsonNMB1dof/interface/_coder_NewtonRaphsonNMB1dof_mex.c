/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_NewtonRaphsonNMB1dof_mex.c
 *
 * Code generation for function '_coder_NewtonRaphsonNMB1dof_mex'
 *
 */

/* Include files */
#include "NewtonRaphsonNMB1dof.h"
#include "_coder_NewtonRaphsonNMB1dof_mex.h"
#include "NewtonRaphsonNMB1dof_terminate.h"
#include "_coder_NewtonRaphsonNMB1dof_api.h"
#include "NewtonRaphsonNMB1dof_initialize.h"
#include "NewtonRaphsonNMB1dof_data.h"

/* Function Declarations */
static void c_NewtonRaphsonNMB1dof_mexFunct(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[7]);

/* Function Definitions */
static void c_NewtonRaphsonNMB1dof_mexFunct(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[7])
{
  int32_T n;
  const mxArray *inputs[7];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 7, 4,
                        20, "NewtonRaphsonNMB1dof");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "NewtonRaphsonNMB1dof");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  NewtonRaphsonNMB1dof_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  NewtonRaphsonNMB1dof_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(NewtonRaphsonNMB1dof_atexit);

  /* Module initialization. */
  NewtonRaphsonNMB1dof_initialize();

  /* Dispatch the entry-point. */
  c_NewtonRaphsonNMB1dof_mexFunct(nlhs, plhs, nrhs, prhs);
}

/* End of code generation (_coder_NewtonRaphsonNMB1dof_mex.c) */
