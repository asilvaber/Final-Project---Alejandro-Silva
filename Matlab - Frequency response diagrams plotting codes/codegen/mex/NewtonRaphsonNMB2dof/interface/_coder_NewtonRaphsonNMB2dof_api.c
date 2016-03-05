/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_NewtonRaphsonNMB2dof_api.c
 *
 * Code generation for function '_coder_NewtonRaphsonNMB2dof_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonNMB2dof.h"
#include "_coder_NewtonRaphsonNMB2dof_api.h"
#include "NewtonRaphsonNMB2dof_data.h"

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
  static const int32_T iv1[2] = { 0, 0 };

  const mxArray *m1;
  static const int32_T iv2[2] = { 1, 200 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u);
  emlrtSetDimensions((mxArray *)m1, iv2, 2);
  emlrtAssign(&y, m1);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[200]
{
  real_T (*ret)[200];
  int32_T iv3[2];
  int32_T i1;
  for (i1 = 0; i1 < 2; i1++) {
    iv3[i1] = 1 + 199 * i1;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv3);
  ret = (real_T (*)[200])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void NewtonRaphsonNMB2dof_api(const mxArray * const prhs[9], const mxArray
  *plhs[2])
{
  real_T (*Amplitude1NMB)[200];
  real_T (*Amplitude2NMB)[200];
  real_T tol;
  real_T m1;
  real_T m2;
  real_T k1;
  real_T k2;
  real_T beta;
  real_T aMax;
  real_T maxIter;
  real_T (*W)[200];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  Amplitude1NMB = (real_T (*)[200])mxMalloc(sizeof(real_T [200]));
  Amplitude2NMB = (real_T (*)[200])mxMalloc(sizeof(real_T [200]));

  /* Marshall function inputs */
  tol = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "tol");
  m1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "m1");
  m2 = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "m2");
  k1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "k1");
  k2 = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "k2");
  beta = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "beta");
  aMax = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "aMax");
  maxIter = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "maxIter");
  W = c_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "W");

  /* Invoke the target function */
  NewtonRaphsonNMB2dof(&st, tol, m1, m2, k1, k2, beta, aMax, maxIter, *W,
                       *Amplitude1NMB, *Amplitude2NMB);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*Amplitude1NMB);
  plhs[1] = emlrt_marshallOut(*Amplitude2NMB);
}

/* End of code generation (_coder_NewtonRaphsonNMB2dof_api.c) */
