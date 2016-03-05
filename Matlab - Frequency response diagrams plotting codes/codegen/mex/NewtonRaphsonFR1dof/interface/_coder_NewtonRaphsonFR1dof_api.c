/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_NewtonRaphsonFR1dof_api.c
 *
 * Code generation for function '_coder_NewtonRaphsonFR1dof_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonFR1dof.h"
#include "_coder_NewtonRaphsonFR1dof_api.h"
#include "NewtonRaphsonFR1dof_emxutil.h"
#include "NewtonRaphsonFR1dof_data.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "_coder_NewtonRaphsonFR1dof_api", "" };

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *tol, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv2[2] = { 0, 0 };

  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u->data);
  emlrtSetDimensions((mxArray *)m2, u->size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv1[2] = { 0, 0 };

  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u->data);
  emlrtSetDimensions((mxArray *)m1, u->size, 2);
  emlrtAssign(&y, m1);
  return y;
}

void NewtonRaphsonFR1dof_api(const mxArray * const prhs[12], const mxArray *
  plhs[5])
{
  emxArray_real_T *AmplitudeFR;
  emxArray_real_T *AamplitudeFR;
  emxArray_real_T *BamplitudeFR;
  emxArray_real_T *PhaseAngleFR;
  emxArray_real_T *W;
  real_T tol;
  real_T m;
  real_T c;
  real_T k;
  real_T beta;
  real_T fc;
  real_T fMin;
  real_T fMax;
  real_T numAmplSamples;
  real_T numPulsSamples;
  real_T aMax;
  real_T maxIter;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &AmplitudeFR, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &AamplitudeFR, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &BamplitudeFR, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &PhaseAngleFR, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &W, 2, &b_emlrtRTEI, true);

  /* Marshall function inputs */
  tol = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "tol");
  m = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "m");
  c = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "c");
  k = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "k");
  beta = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "beta");
  fc = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "fc");
  fMin = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "fMin");
  fMax = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "fMax");
  numAmplSamples = emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "numAmplSamples");
  numPulsSamples = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "numPulsSamples");
  aMax = emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "aMax");
  maxIter = emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "maxIter");

  /* Invoke the target function */
  NewtonRaphsonFR1dof(&st, tol, m, c, k, beta, fc, fMin, fMax, numAmplSamples,
                      numPulsSamples, aMax, maxIter, AmplitudeFR, AamplitudeFR,
                      BamplitudeFR, PhaseAngleFR, W);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(AmplitudeFR);
  plhs[1] = emlrt_marshallOut(AamplitudeFR);
  plhs[2] = emlrt_marshallOut(BamplitudeFR);
  plhs[3] = emlrt_marshallOut(PhaseAngleFR);
  plhs[4] = b_emlrt_marshallOut(W);
  W->canFreeData = false;
  emxFree_real_T(&W);
  PhaseAngleFR->canFreeData = false;
  emxFree_real_T(&PhaseAngleFR);
  BamplitudeFR->canFreeData = false;
  emxFree_real_T(&BamplitudeFR);
  AamplitudeFR->canFreeData = false;
  emxFree_real_T(&AamplitudeFR);
  AmplitudeFR->canFreeData = false;
  emxFree_real_T(&AmplitudeFR);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_NewtonRaphsonFR1dof_api.c) */
