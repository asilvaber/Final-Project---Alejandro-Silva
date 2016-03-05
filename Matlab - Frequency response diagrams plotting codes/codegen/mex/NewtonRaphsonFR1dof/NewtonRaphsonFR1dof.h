/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonFR1dof.h
 *
 * Code generation for function 'NewtonRaphsonFR1dof'
 *
 */

#ifndef __NEWTONRAPHSONFR1DOF_H__
#define __NEWTONRAPHSONFR1DOF_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "NewtonRaphsonFR1dof_types.h"

/* Function Declarations */
extern void NewtonRaphsonFR1dof(const emlrtStack *sp, real_T tol, real_T m,
  real_T c, real_T k, real_T beta, real_T fc, real_T fMin, real_T fMax, real_T
  numAmplSamples, real_T numPulsSamples, real_T aMax, real_T maxIter,
  emxArray_real_T *AmplitudeFR, emxArray_real_T *AamplitudeFR, emxArray_real_T
  *BamplitudeFR, emxArray_real_T *PhaseAngleFR, emxArray_real_T *W);

#endif

/* End of code generation (NewtonRaphsonFR1dof.h) */
