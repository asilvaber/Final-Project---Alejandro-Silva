/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonFR2dof_initialize.c
 *
 * Code generation for function 'NewtonRaphsonFR2dof_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonFR2dof.h"
#include "NewtonRaphsonFR2dof_initialize.h"
#include "NewtonRaphsonFR2dof_data.h"

/* Function Definitions */
void NewtonRaphsonFR2dof_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (NewtonRaphsonFR2dof_initialize.c) */
