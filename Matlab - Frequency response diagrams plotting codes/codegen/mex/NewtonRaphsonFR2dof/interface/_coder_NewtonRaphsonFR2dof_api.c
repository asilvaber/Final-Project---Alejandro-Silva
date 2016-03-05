/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_NewtonRaphsonFR2dof_api.c
 *
 * Code generation for function '_coder_NewtonRaphsonFR2dof_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonFR2dof.h"
#include "_coder_NewtonRaphsonFR2dof_api.h"
#include "NewtonRaphsonFR2dof_emxutil.h"
#include "NewtonRaphsonFR2dof_data.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "_coder_NewtonRaphsonFR2dof_api", "" };

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

void NewtonRaphsonFR2dof_api(const mxArray * const prhs[18], const mxArray *
  plhs[7])
{
  emxArray_real_T *Amplitude1FR;
  emxArray_real_T *Amplitude2FR;
  emxArray_real_T *A1amplitudeFR;
  emxArray_real_T *A2amplitudeFR;
  emxArray_real_T *B1amplitudeFR;
  emxArray_real_T *B2amplitudeFR;
  emxArray_real_T *W;
  real_T tol;
  real_T m1;
  real_T m2;
  real_T c1;
  real_T c2;
  real_T k1;
  real_T k2;
  real_T beta;
  real_T fc11;
  real_T fc12;
  real_T fc21;
  real_T fc22;
  real_T fMin;
  real_T fMax;
  real_T numAmplSamples;
  real_T numPulsSamples;
  real_T aMax;
  real_T maxIter;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Amplitude1FR, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &Amplitude2FR, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &A1amplitudeFR, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &A2amplitudeFR, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &B1amplitudeFR, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &B2amplitudeFR, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &W, 2, &b_emlrtRTEI, true);

  /* Marshall function inputs */
  tol = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "tol");
  m1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "m1");
  m2 = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "m2");
  c1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "c1");
  c2 = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "c2");
  k1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "k1");
  k2 = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "k2");
  beta = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "beta");
  fc11 = emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "fc11");
  fc12 = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "fc12");
  fc21 = emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "fc21");
  fc22 = emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "fc22");
  fMin = emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "fMin");
  fMax = emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "fMax");
  numAmplSamples = emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "numAmplSamples");
  numPulsSamples = emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "numPulsSamples");
  aMax = emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "aMax");
  maxIter = emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "maxIter");

  /* Invoke the target function */
  NewtonRaphsonFR2dof(&st, tol, m1, m2, c1, c2, k1, k2, beta, fc11, fc12, fc21,
                      fc22, fMin, fMax, numAmplSamples, numPulsSamples, aMax,
                      maxIter, Amplitude1FR, Amplitude2FR, A1amplitudeFR,
                      A2amplitudeFR, B1amplitudeFR, B2amplitudeFR, W);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(Amplitude1FR);
  plhs[1] = emlrt_marshallOut(Amplitude2FR);
  plhs[2] = emlrt_marshallOut(A1amplitudeFR);
  plhs[3] = emlrt_marshallOut(A2amplitudeFR);
  plhs[4] = emlrt_marshallOut(B1amplitudeFR);
  plhs[5] = emlrt_marshallOut(B2amplitudeFR);
  plhs[6] = b_emlrt_marshallOut(W);
  W->canFreeData = false;
  emxFree_real_T(&W);
  B2amplitudeFR->canFreeData = false;
  emxFree_real_T(&B2amplitudeFR);
  B1amplitudeFR->canFreeData = false;
  emxFree_real_T(&B1amplitudeFR);
  A2amplitudeFR->canFreeData = false;
  emxFree_real_T(&A2amplitudeFR);
  A1amplitudeFR->canFreeData = false;
  emxFree_real_T(&A1amplitudeFR);
  Amplitude2FR->canFreeData = false;
  emxFree_real_T(&Amplitude2FR);
  Amplitude1FR->canFreeData = false;
  emxFree_real_T(&Amplitude1FR);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_NewtonRaphsonFR2dof_api.c) */
