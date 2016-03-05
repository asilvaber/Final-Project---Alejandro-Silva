/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonFR1dof_terminate.c
 *
 * Code generation for function 'NewtonRaphsonFR1dof_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonFR1dof.h"
#include "NewtonRaphsonFR1dof_terminate.h"
#include "NewtonRaphsonFR1dof_data.h"

/* Function Definitions */
void NewtonRaphsonFR1dof_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void NewtonRaphsonFR1dof_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (NewtonRaphsonFR1dof_terminate.c) */
