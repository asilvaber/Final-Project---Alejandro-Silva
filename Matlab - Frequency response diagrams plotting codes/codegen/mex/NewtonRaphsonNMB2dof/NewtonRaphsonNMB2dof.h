/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonNMB2dof.h
 *
 * Code generation for function 'NewtonRaphsonNMB2dof'
 *
 */

#ifndef __NEWTONRAPHSONNMB2DOF_H__
#define __NEWTONRAPHSONNMB2DOF_H__

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
#include "NewtonRaphsonNMB2dof_types.h"

/* Function Declarations */
extern void NewtonRaphsonNMB2dof(const emlrtStack *sp, real_T tol, real_T m1,
  real_T m2, real_T k1, real_T k2, real_T beta, real_T aMax, real_T maxIter,
  const real_T W[200], real_T Amplitude1NMB[200], real_T Amplitude2NMB[200]);

#endif

/* End of code generation (NewtonRaphsonNMB2dof.h) */
