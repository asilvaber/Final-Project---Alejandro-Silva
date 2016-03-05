/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonNMB1dof.h
 *
 * Code generation for function 'NewtonRaphsonNMB1dof'
 *
 */

#ifndef __NEWTONRAPHSONNMB1DOF_H__
#define __NEWTONRAPHSONNMB1DOF_H__

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
#include "NewtonRaphsonNMB1dof_types.h"

/* Function Declarations */
extern void NewtonRaphsonNMB1dof(const emlrtStack *sp, real_T tol, real_T m,
  real_T k, real_T beta, real_T aMax, real_T maxIter, const real_T W[200],
  real_T AmplitudeNMB[200]);

#endif

/* End of code generation (NewtonRaphsonNMB1dof.h) */
