/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.h
 *
 * Code generation for function 'mldivide'
 *
 */

#ifndef __MLDIVIDE_H__
#define __MLDIVIDE_H__

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
extern void mldivide(const emlrtStack *sp, const real_T A[16], real_T B[4]);

#endif

/* End of code generation (mldivide.h) */
