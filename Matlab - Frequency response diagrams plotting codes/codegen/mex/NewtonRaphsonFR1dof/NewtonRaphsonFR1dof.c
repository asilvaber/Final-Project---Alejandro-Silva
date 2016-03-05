/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonFR1dof.c
 *
 * Code generation for function 'NewtonRaphsonFR1dof'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonFR1dof.h"
#include "NewtonRaphsonFR1dof_emxutil.h"
#include "eml_error.h"
#include "eml_warning.h"
#include "NewtonRaphsonFR1dof_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 4, "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m"
};

static emlrtRSInfo b_emlrtRSI = { 18, "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m"
};

static emlrtRSInfo c_emlrtRSI = { 24, "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m"
};

static emlrtRSInfo d_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo e_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo f_emlrtRSI = { 1, "mldivide",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRSInfo g_emlrtRSI = { 54, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo h_emlrtRSI = { 155, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo i_emlrtRSI = { 76, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo j_emlrtRSI = { 14, "sqrt",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 67, "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 17, 38, "W", "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 16, 40, "W", "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 14, 36, "W", "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtRTEInfo d_emlrtRTEI = { 11, 5, "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m"
};

static emlrtDCInfo emlrtDCI = { 5, 21, "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  1 };

static emlrtDCInfo b_emlrtDCI = { 5, 21, "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  4 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 22, 26, "AamplitudeFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 22, 28, "AamplitudeFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 23, 26, "BamplitudeFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 23, 28, "BamplitudeFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 24, 25, "AmplitudeFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 24, 27, "AmplitudeFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 25, 26, "PhaseAngleFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 25, 28, "PhaseAngleFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 27, 49, "PhaseAngleFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 27, 51, "PhaseAngleFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 27, 69, "PhaseAngleFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 27, 71, "PhaseAngleFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 26, 45, "PhaseAngleFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 26, 47, "PhaseAngleFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 26, 66, "PhaseAngleFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 26, 68, "PhaseAngleFR",
  "NewtonRaphsonFR1dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR1dof.m",
  0 };

/* Function Definitions */
void NewtonRaphsonFR1dof(const emlrtStack *sp, real_T tol, real_T m, real_T c,
  real_T k, real_T beta, real_T fc, real_T fMin, real_T fMax, real_T
  numAmplSamples, real_T numPulsSamples, real_T aMax, real_T maxIter,
  emxArray_real_T *AmplitudeFR, emxArray_real_T *AamplitudeFR, emxArray_real_T
  *BamplitudeFR, emxArray_real_T *PhaseAngleFR, emxArray_real_T *W)
{
  real_T a22;
  real_T d;
  real_T kd;
  int32_T r2;
  real_T anew;
  real_T apnd;
  boolean_T n_too_large;
  real_T ndbl;
  real_T cdiff;
  real_T absa;
  real_T absb;
  int32_T i0;
  int32_T nm1d2;
  int32_T b_k;
  real_T b_kd;
  int32_T i;
  int32_T j;
  real_T n;
  real_T amplitude[2];
  real_T F[2];
  int32_T exitg1;
  real_T J[4];
  real_T Y[2];
  int32_T b_j;
  int32_T b_r2;
  int32_T c_j;
  int32_T c_r2;
  int32_T d_j;
  int32_T d_r2;
  int32_T e_j;
  int32_T e_r2;
  int32_T i1;
  int32_T i2;
  int32_T f_j;
  int32_T f_r2;
  int32_T g_j;
  int32_T i3;
  int32_T h_j;
  int32_T g_r2;
  int32_T i_j;
  int32_T i4;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  a22 = fMin * 2.0 * 3.1415926535897931;
  d = (fMax - fMin) / (numPulsSamples - 1.0) * 2.0 * 3.1415926535897931;
  kd = fMax * 2.0 * 3.1415926535897931;
  b_st.site = &d_emlrtRSI;
  if (muDoubleScalarIsNaN(a22) || muDoubleScalarIsNaN(d) || muDoubleScalarIsNaN
      (kd)) {
    r2 = 0;
    anew = rtNaN;
    apnd = kd;
    n_too_large = false;
  } else if ((d == 0.0) || ((a22 < kd) && (d < 0.0)) || ((kd < a22) && (d > 0.0)))
  {
    r2 = -1;
    anew = a22;
    apnd = kd;
    n_too_large = false;
  } else if (muDoubleScalarIsInf(a22) || muDoubleScalarIsInf(kd)) {
    r2 = 0;
    anew = rtNaN;
    apnd = kd;
    if (muDoubleScalarIsInf(d) || (a22 == kd)) {
      n_too_large = true;
    } else {
      n_too_large = false;
    }

    n_too_large = !n_too_large;
  } else if (muDoubleScalarIsInf(d)) {
    r2 = 0;
    anew = a22;
    apnd = kd;
    n_too_large = false;
  } else {
    anew = a22;
    ndbl = muDoubleScalarFloor((kd - a22) / d + 0.5);
    apnd = a22 + ndbl * d;
    if (d > 0.0) {
      cdiff = apnd - kd;
    } else {
      cdiff = kd - apnd;
    }

    absa = muDoubleScalarAbs(a22);
    absb = muDoubleScalarAbs(kd);
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, absb)) {
      ndbl++;
      apnd = kd;
    } else if (cdiff > 0.0) {
      apnd = a22 + (ndbl - 1.0) * d;
    } else {
      ndbl++;
    }

    n_too_large = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      r2 = (int32_T)ndbl - 1;
    } else {
      r2 = -1;
    }
  }

  c_st.site = &e_emlrtRSI;
  if (!n_too_large) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &c_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  i0 = W->size[0] * W->size[1];
  W->size[0] = 1;
  W->size[1] = r2 + 1;
  emxEnsureCapacity(&b_st, (emxArray__common *)W, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (r2 + 1 > 0) {
    W->data[0] = anew;
    if (r2 + 1 > 1) {
      W->data[r2] = apnd;
      i0 = r2 + (r2 < 0);
      if (i0 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i0 >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)i0 >> 1);
      }

      for (b_k = 1; b_k < nm1d2; b_k++) {
        kd = (real_T)b_k * d;
        W->data[b_k] = anew + kd;
        W->data[r2 - b_k] = apnd - kd;
      }

      if (nm1d2 << 1 == r2) {
        W->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        kd = (real_T)nm1d2 * d;
        W->data[nm1d2] = anew + kd;
        W->data[nm1d2 + 1] = apnd - kd;
      }
    }
  }

  if (numAmplSamples >= 0.0) {
    kd = numAmplSamples;
  } else {
    kd = emlrtNonNegativeCheckR2012b(numAmplSamples, &b_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(kd, &emlrtDCI, sp);
  i0 = AmplitudeFR->size[0] * AmplitudeFR->size[1];
  AmplitudeFR->size[0] = (int32_T)numAmplSamples;
  emxEnsureCapacity(sp, (emxArray__common *)AmplitudeFR, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (numAmplSamples >= 0.0) {
    kd = numAmplSamples;
  } else {
    kd = emlrtNonNegativeCheckR2012b(numAmplSamples, &b_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(kd, &emlrtDCI, sp);
  nm1d2 = W->size[1];
  i0 = AmplitudeFR->size[0] * AmplitudeFR->size[1];
  AmplitudeFR->size[1] = nm1d2;
  emxEnsureCapacity(sp, (emxArray__common *)AmplitudeFR, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (numAmplSamples >= 0.0) {
    kd = numAmplSamples;
  } else {
    kd = emlrtNonNegativeCheckR2012b(numAmplSamples, &b_emlrtDCI, sp);
  }

  if (kd == (int32_T)muDoubleScalarFloor(kd)) {
    b_kd = kd;
  } else {
    b_kd = emlrtIntegerCheckR2012b(kd, &emlrtDCI, sp);
  }

  nm1d2 = (int32_T)b_kd * W->size[1];
  for (i0 = 0; i0 < nm1d2; i0++) {
    AmplitudeFR->data[i0] = 0.0;
  }

  i0 = AamplitudeFR->size[0] * AamplitudeFR->size[1];
  AamplitudeFR->size[0] = (int32_T)numAmplSamples;
  emxEnsureCapacity(sp, (emxArray__common *)AamplitudeFR, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = W->size[1];
  i0 = AamplitudeFR->size[0] * AamplitudeFR->size[1];
  AamplitudeFR->size[1] = nm1d2;
  emxEnsureCapacity(sp, (emxArray__common *)AamplitudeFR, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = (int32_T)numAmplSamples * W->size[1];
  for (i0 = 0; i0 < nm1d2; i0++) {
    AamplitudeFR->data[i0] = 0.0;
  }

  i0 = BamplitudeFR->size[0] * BamplitudeFR->size[1];
  BamplitudeFR->size[0] = (int32_T)numAmplSamples;
  emxEnsureCapacity(sp, (emxArray__common *)BamplitudeFR, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = W->size[1];
  i0 = BamplitudeFR->size[0] * BamplitudeFR->size[1];
  BamplitudeFR->size[1] = nm1d2;
  emxEnsureCapacity(sp, (emxArray__common *)BamplitudeFR, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = (int32_T)numAmplSamples * W->size[1];
  for (i0 = 0; i0 < nm1d2; i0++) {
    BamplitudeFR->data[i0] = 0.0;
  }

  i0 = PhaseAngleFR->size[0] * PhaseAngleFR->size[1];
  PhaseAngleFR->size[0] = (int32_T)numAmplSamples;
  emxEnsureCapacity(sp, (emxArray__common *)PhaseAngleFR, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = W->size[1];
  i0 = PhaseAngleFR->size[0] * PhaseAngleFR->size[1];
  PhaseAngleFR->size[1] = nm1d2;
  emxEnsureCapacity(sp, (emxArray__common *)PhaseAngleFR, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = (int32_T)numAmplSamples * W->size[1];
  for (i0 = 0; i0 < nm1d2; i0++) {
    PhaseAngleFR->data[i0] = 0.0;
  }

  i = 0;
  while (i <= W->size[1] - 1) {
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, numAmplSamples, mxDOUBLE_CLASS,
      (int32_T)numAmplSamples, &d_emlrtRTEI, sp);
    j = 1;
    while (j - 1 <= (int32_T)numAmplSamples - 1) {
      n = 1.0;
      amplitude[0] = (1.0 + (real_T)(j - 1)) * aMax / numAmplSamples;
      amplitude[1] = (1.0 + (real_T)(j - 1)) * aMax / numAmplSamples;
      i0 = W->size[1];
      nm1d2 = i + 1;
      emlrtDynamicBoundsCheckR2012b(nm1d2, 1, i0, &c_emlrtBCI, sp);
      F[0] = ((((4.0 * k * amplitude[0] - 4.0 * m * amplitude[0] * (W->data[i] *
                  W->data[i])) - 4.0 * c * amplitude[1] * W->data[i]) + 3.0 *
               beta * amplitude[0] * (amplitude[1] * amplitude[1])) - 4.0 * fc)
        + 3.0 * beta * muDoubleScalarPower(amplitude[0], 3.0);
      F[1] = (((3.0 * beta * (amplitude[0] * amplitude[0]) * amplitude[1] - 4.0 *
                (W->data[i] * W->data[i]) * m * amplitude[1]) + 4.0 * k *
               amplitude[1]) + 3.0 * beta * muDoubleScalarPower(amplitude[1],
               3.0)) + 4.0 * c * amplitude[0] * W->data[i];
      do {
        exitg1 = 0;
        a22 = 0.0;
        kd = 2.2250738585072014E-308;
        for (b_k = 0; b_k < 2; b_k++) {
          ndbl = muDoubleScalarAbs(F[b_k]);
          if (ndbl > kd) {
            cdiff = kd / ndbl;
            a22 = 1.0 + a22 * cdiff * cdiff;
            kd = ndbl;
          } else {
            cdiff = ndbl / kd;
            a22 += cdiff * cdiff;
          }
        }

        a22 = kd * muDoubleScalarSqrt(a22);
        if ((a22 > tol) && (n <= maxIter)) {
          i0 = W->size[1];
          nm1d2 = i + 1;
          emlrtDynamicBoundsCheckR2012b(nm1d2, 1, i0, &b_emlrtBCI, sp);
          F[0] = ((((4.0 * k * amplitude[0] - 4.0 * m * amplitude[0] * (W->
                      data[i] * W->data[i])) - 4.0 * c * amplitude[1] * W->
                    data[i]) + 3.0 * beta * amplitude[0] * (amplitude[1] *
                    amplitude[1])) - 4.0 * fc) + 3.0 * beta *
            muDoubleScalarPower(amplitude[0], 3.0);
          F[1] = (((3.0 * beta * (amplitude[0] * amplitude[0]) * amplitude[1] -
                    4.0 * (W->data[i] * W->data[i]) * m * amplitude[1]) + 4.0 *
                   k * amplitude[1]) + 3.0 * beta * muDoubleScalarPower
                  (amplitude[1], 3.0)) + 4.0 * c * amplitude[0] * W->data[i];
          i0 = W->size[1];
          nm1d2 = i + 1;
          emlrtDynamicBoundsCheckR2012b(nm1d2, 1, i0, &emlrtBCI, sp);
          J[0] = ((4.0 * k - 4.0 * m * (W->data[i] * W->data[i])) + 3.0 * beta *
                  (amplitude[1] * amplitude[1])) + 9.0 * beta * (amplitude[0] *
            amplitude[0]);
          J[2] = -4.0 * c * W->data[i] + 6.0 * beta * amplitude[0] * amplitude[1];
          J[1] = 6.0 * beta * amplitude[0] * amplitude[1] + 4.0 * c * W->data[i];
          J[3] = ((3.0 * beta * (amplitude[0] * amplitude[0]) - 4.0 * m *
                   (W->data[i] * W->data[i])) + 4.0 * k) + 9.0 * beta *
            (amplitude[1] * amplitude[1]);
          st.site = &b_emlrtRSI;
          b_st.site = &f_emlrtRSI;
          c_st.site = &g_emlrtRSI;
          if (muDoubleScalarAbs(J[1]) > muDoubleScalarAbs(J[0])) {
            nm1d2 = 1;
            r2 = 0;
          } else {
            nm1d2 = 0;
            r2 = 1;
          }

          kd = J[r2] / J[nm1d2];
          a22 = J[2 + r2] - kd * J[2 + nm1d2];
          if ((a22 == 0.0) || (J[nm1d2] == 0.0)) {
            d_st.site = &h_emlrtRSI;
            e_st.site = &i_emlrtRSI;
            eml_warning(&e_st);
          }

          Y[1] = (F[r2] - F[nm1d2] * kd) / a22;
          Y[0] = (F[nm1d2] - Y[1] * J[2 + nm1d2]) / J[nm1d2];
          for (i0 = 0; i0 < 2; i0++) {
            amplitude[i0] -= Y[i0];
          }

          n++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (n <= maxIter) {
        i0 = AamplitudeFR->size[0];
        nm1d2 = AamplitudeFR->size[1];
        r2 = 1 + i;
        if ((j >= 1) && (j < i0)) {
          b_j = j;
        } else {
          b_j = emlrtDynamicBoundsCheckR2012b(j, 1, i0, &d_emlrtBCI, sp);
        }

        if ((r2 >= 1) && (r2 < nm1d2)) {
          b_r2 = r2;
        } else {
          b_r2 = emlrtDynamicBoundsCheckR2012b(r2, 1, nm1d2, &e_emlrtBCI, sp);
        }

        AamplitudeFR->data[(b_j + AamplitudeFR->size[0] * (b_r2 - 1)) - 1] =
          amplitude[0];
        i0 = BamplitudeFR->size[0];
        nm1d2 = BamplitudeFR->size[1];
        r2 = 1 + i;
        if ((j >= 1) && (j < i0)) {
          c_j = j;
        } else {
          c_j = emlrtDynamicBoundsCheckR2012b(j, 1, i0, &f_emlrtBCI, sp);
        }

        if ((r2 >= 1) && (r2 < nm1d2)) {
          c_r2 = r2;
        } else {
          c_r2 = emlrtDynamicBoundsCheckR2012b(r2, 1, nm1d2, &g_emlrtBCI, sp);
        }

        BamplitudeFR->data[(c_j + BamplitudeFR->size[0] * (c_r2 - 1)) - 1] =
          amplitude[1];
        st.site = &c_emlrtRSI;
        kd = amplitude[1] * amplitude[1] + amplitude[0] * amplitude[0];
        if (kd < 0.0) {
          b_st.site = &j_emlrtRSI;
          eml_error(&b_st);
        }

        i0 = AmplitudeFR->size[0];
        nm1d2 = AmplitudeFR->size[1];
        r2 = 1 + i;
        if ((j >= 1) && (j < i0)) {
          d_j = j;
        } else {
          d_j = emlrtDynamicBoundsCheckR2012b(j, 1, i0, &h_emlrtBCI, sp);
        }

        if ((r2 >= 1) && (r2 < nm1d2)) {
          d_r2 = r2;
        } else {
          d_r2 = emlrtDynamicBoundsCheckR2012b(r2, 1, nm1d2, &i_emlrtBCI, sp);
        }

        AmplitudeFR->data[(d_j + AmplitudeFR->size[0] * (d_r2 - 1)) - 1] =
          muDoubleScalarSqrt(kd);
        i0 = PhaseAngleFR->size[0];
        nm1d2 = PhaseAngleFR->size[1];
        r2 = 1 + i;
        if ((j >= 1) && (j < i0)) {
          e_j = j;
        } else {
          e_j = emlrtDynamicBoundsCheckR2012b(j, 1, i0, &j_emlrtBCI, sp);
        }

        if ((r2 >= 1) && (r2 < nm1d2)) {
          e_r2 = r2;
        } else {
          e_r2 = emlrtDynamicBoundsCheckR2012b(r2, 1, nm1d2, &k_emlrtBCI, sp);
        }

        PhaseAngleFR->data[(e_j + PhaseAngleFR->size[0] * (e_r2 - 1)) - 1] =
          muDoubleScalarAtan(muDoubleScalarAbs(amplitude[1] / amplitude[0]));
        if (amplitude[0] > 0.0) {
          i0 = PhaseAngleFR->size[0];
          nm1d2 = PhaseAngleFR->size[1];
          r2 = 1 + i;
          b_k = PhaseAngleFR->size[0];
          i1 = PhaseAngleFR->size[1];
          i2 = 1 + i;
          if ((j >= 1) && (j < i0)) {
            f_j = j;
          } else {
            f_j = emlrtDynamicBoundsCheckR2012b(j, 1, i0, &p_emlrtBCI, sp);
          }

          if ((r2 >= 1) && (r2 < nm1d2)) {
            f_r2 = r2;
          } else {
            f_r2 = emlrtDynamicBoundsCheckR2012b(r2, 1, nm1d2, &q_emlrtBCI, sp);
          }

          if ((j >= 1) && (j < b_k)) {
            g_j = j;
          } else {
            g_j = emlrtDynamicBoundsCheckR2012b(j, 1, b_k, &r_emlrtBCI, sp);
          }

          if ((i2 >= 1) && (i2 < i1)) {
            i3 = i2;
          } else {
            i3 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &s_emlrtBCI, sp);
          }

          PhaseAngleFR->data[(f_j + PhaseAngleFR->size[0] * (f_r2 - 1)) - 1] =
            -PhaseAngleFR->data[(g_j + PhaseAngleFR->size[0] * (i3 - 1)) - 1];
        } else {
          if (amplitude[0] < 0.0) {
            i0 = PhaseAngleFR->size[0];
            nm1d2 = PhaseAngleFR->size[1];
            r2 = 1 + i;
            b_k = PhaseAngleFR->size[0];
            i1 = PhaseAngleFR->size[1];
            i2 = 1 + i;
            if ((j >= 1) && (j < i0)) {
              h_j = j;
            } else {
              h_j = emlrtDynamicBoundsCheckR2012b(j, 1, i0, &l_emlrtBCI, sp);
            }

            if ((r2 >= 1) && (r2 < nm1d2)) {
              g_r2 = r2;
            } else {
              g_r2 = emlrtDynamicBoundsCheckR2012b(r2, 1, nm1d2, &m_emlrtBCI, sp);
            }

            if ((j >= 1) && (j < b_k)) {
              i_j = j;
            } else {
              i_j = emlrtDynamicBoundsCheckR2012b(j, 1, b_k, &n_emlrtBCI, sp);
            }

            if ((i2 >= 1) && (i2 < i1)) {
              i4 = i2;
            } else {
              i4 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &o_emlrtBCI, sp);
            }

            PhaseAngleFR->data[(h_j + PhaseAngleFR->size[0] * (g_r2 - 1)) - 1] =
              PhaseAngleFR->data[(i_j + PhaseAngleFR->size[0] * (i4 - 1)) - 1] -
              3.1415926535897931;
          }
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (NewtonRaphsonFR1dof.c) */
