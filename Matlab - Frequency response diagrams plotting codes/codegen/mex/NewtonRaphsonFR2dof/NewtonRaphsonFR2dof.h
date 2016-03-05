/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonFR2dof.h
 *
 * Code generation for function 'NewtonRaphsonFR2dof'
 *
 */

#ifndef __NEWTONRAPHSONFR2DOF_H__
#define __NEWTONRAPHSONFR2DOF_H__

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
#include "NewtonRaphsonFR2dof_types.h"

/* Function Declarations */
extern void NewtonRaphsonFR2dof(const emlrtStack *sp, real_T tol, real_T m1,
  real_T m2, real_T c1, real_T c2, real_T k1, real_T k2, real_T beta, real_T
  fc11, real_T fc12, real_T fc21, real_T fc22, real_T fMin, real_T fMax, real_T
  numAmplSamples, real_T numPulsSamples, real_T aMax, real_T maxIter,
  emxArray_real_T *Amplitude1FR, emxArray_real_T *Amplitude2FR, emxArray_real_T *
  A1amplitudeFR, emxArray_real_T *A2amplitudeFR, emxArray_real_T *B1amplitudeFR,
  emxArray_real_T *B2amplitudeFR, emxArray_real_T *W);

#endif

/* End of code generation (NewtonRaphsonFR2dof.h) */
