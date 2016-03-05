/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonNMB1dof.c
 *
 * Code generation for function 'NewtonRaphsonNMB1dof'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonNMB1dof.h"
#include "NewtonRaphsonNMB1dof_data.h"

/* Function Definitions */
void NewtonRaphsonNMB1dof(const emlrtStack *sp, real_T tol, real_T m, real_T k,
  real_T beta, real_T aMax, real_T maxIter, const real_T W[200], real_T
  AmplitudeNMB[200])
{
  int32_T i;
  real_T n;
  real_T amplitude;
  real_T F;
  memset(&AmplitudeNMB[0], 0, 200U * sizeof(real_T));
  i = 0;
  while (i < 200) {
    n = 1.0;
    amplitude = aMax;
    F = (4.0 * k * aMax - 4.0 * m * aMax * (W[i] * W[i])) + 3.0 * beta *
      muDoubleScalarPower(aMax, 3.0);
    while ((muDoubleScalarAbs(F) > tol) && (n <= maxIter)) {
      F = (4.0 * k * amplitude - 4.0 * m * amplitude * (W[i] * W[i])) + 3.0 *
        beta * muDoubleScalarPower(amplitude, 3.0);
      amplitude -= F / ((4.0 * k - 4.0 * m * (W[i] * W[i])) + 9.0 * beta *
                        (amplitude * amplitude));
      n++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (n <= maxIter) {
      AmplitudeNMB[i] = amplitude;
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (NewtonRaphsonNMB1dof.c) */
