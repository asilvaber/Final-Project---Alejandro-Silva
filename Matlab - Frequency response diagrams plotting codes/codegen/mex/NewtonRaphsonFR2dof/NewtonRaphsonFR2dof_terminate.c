/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonFR2dof_terminate.c
 *
 * Code generation for function 'NewtonRaphsonFR2dof_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonFR2dof.h"
#include "NewtonRaphsonFR2dof_terminate.h"
#include "NewtonRaphsonFR2dof_data.h"

/* Function Definitions */
void NewtonRaphsonFR2dof_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void NewtonRaphsonFR2dof_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (NewtonRaphsonFR2dof_terminate.c) */
