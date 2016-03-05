/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_NewtonRaphsonNMB1dof_api.c
 *
 * Code generation for function '_coder_NewtonRaphsonNMB1dof_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonNMB1dof.h"
#include "_coder_NewtonRaphsonNMB1dof_api.h"
#include "NewtonRaphsonNMB1dof_data.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *W, const
  char_T *identifier))[200];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[200];
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *tol, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u[200]);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[200];

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *W, const
  char_T *identifier))[200]
{
  real_T (*y)[200];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(W), &thisId);
  emlrtDestroyArray(&W);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[200]
{
  real_T (*y)[200];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *tol, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(tol), &thisId);
  emlrtDestroyArray(&tol);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[200])
{
  const mxArray *y;
  static const int32_T iv0[2] = { 0, 0 };

  const mxArray *m0;
  static const int32_T iv1[2] = { 1, 200 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[200]
{
  real_T (*ret)[200];
  int32_T iv2[2];
  int32_T i0;
  for (i0 = 0; i0 < 2; i0++) {
    iv2[i0] = 1 + 199 * i0;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv2);
  ret = (real_T (*)[200])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void NewtonRaphsonNMB1dof_api(const mxArray * const prhs[7], const mxArray
  *plhs[1])
{
  real_T (*AmplitudeNMB)[200];
  real_T tol;
  real_T m;
  real_T k;
  real_T beta;
  real_T aMax;
  real_T maxIter;
  real_T (*W)[200];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  AmplitudeNMB = (real_T (*)[200])mxMalloc(sizeof(real_T [200]));

  /* Marshall function inputs */
  tol = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "tol");
  m = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "m");
  k = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "k");
  beta = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "beta");
  aMax = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "aMax");
  maxIter = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "maxIter");
  W = c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "W");

  /* Invoke the target function */
  NewtonRaphsonNMB1dof(&st, tol, m, k, beta, aMax, maxIter, *W, *AmplitudeNMB);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*AmplitudeNMB);
}

/* End of code generation (_coder_NewtonRaphsonNMB1dof_api.c) */
