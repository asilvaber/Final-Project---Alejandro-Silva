/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonFR2dof.c
 *
 * Code generation for function 'NewtonRaphsonFR2dof'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonFR2dof.h"
#include "NewtonRaphsonFR2dof_emxutil.h"
#include "eml_error.h"
#include "mldivide.h"
#include "NewtonRaphsonFR2dof_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 4, "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m"
};

static emlrtRSInfo b_emlrtRSI = { 21, "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m"
};

static emlrtRSInfo c_emlrtRSI = { 31, "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m"
};

static emlrtRSInfo d_emlrtRSI = { 32, "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m"
};

static emlrtRSInfo e_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo f_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo ab_emlrtRSI = { 14, "sqrt",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 98, "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 20, 50, "W", "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 19, 69, "W", "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 17, 65, "W", "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtRTEInfo d_emlrtRTEI = { 13, 5, "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m"
};

static emlrtDCInfo emlrtDCI = { 5, 22, "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  1 };

static emlrtDCInfo b_emlrtDCI = { 5, 22, "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  4 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 27, 27, "A1amplitudeFR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 27, 29, "A1amplitudeFR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 28, 27, "A2amplitudeFR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 28, 29, "A2amplitudeFR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 29, 27, "B1amplitudeFR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 29, 29, "B1amplitudeFR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 30, 27, "B2amplitudeFR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 30, 29, "B2amplitudeFR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 31, 26, "Amplitude1FR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 31, 28, "Amplitude1FR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 32, 26, "Amplitude2FR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 32, 28, "Amplitude2FR",
  "NewtonRaphsonFR2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonFR2dof.m",
  0 };

/* Function Definitions */
void NewtonRaphsonFR2dof(const emlrtStack *sp, real_T tol, real_T m1, real_T m2,
  real_T c1, real_T c2, real_T k1, real_T k2, real_T beta, real_T fc11, real_T
  fc12, real_T fc21, real_T fc22, real_T fMin, real_T fMax, real_T
  numAmplSamples, real_T numPulsSamples, real_T aMax, real_T maxIter,
  emxArray_real_T *Amplitude1FR, emxArray_real_T *Amplitude2FR, emxArray_real_T *
  A1amplitudeFR, emxArray_real_T *A2amplitudeFR, emxArray_real_T *B1amplitudeFR,
  emxArray_real_T *B2amplitudeFR, emxArray_real_T *W)
{
  real_T kd;
  real_T d;
  real_T b;
  int32_T n;
  real_T anew;
  real_T apnd;
  boolean_T n_too_large;
  real_T ndbl;
  real_T cdiff;
  real_T absa;
  real_T absb;
  int32_T k;
  int32_T nm1d2;
  real_T b_kd;
  int32_T i;
  int32_T j;
  real_T b_n;
  real_T amplitude1[2];
  real_T amplitude2[2];
  real_T F[4];
  int32_T exitg1;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T delta[4];
  real_T dv0[16];
  real_T dv1[16];
  int32_T b_j;
  int32_T c_n;
  int32_T c_j;
  int32_T d_n;
  int32_T d_j;
  int32_T e_n;
  int32_T e_j;
  int32_T f_n;
  int32_T f_j;
  int32_T g_n;
  int32_T g_j;
  int32_T h_n;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  kd = fMin * 2.0 * 3.1415926535897931;
  d = (fMax - fMin) / (numPulsSamples - 1.0) * 2.0 * 3.1415926535897931;
  b = fMax * 2.0 * 3.1415926535897931;
  b_st.site = &e_emlrtRSI;
  if (muDoubleScalarIsNaN(kd) || muDoubleScalarIsNaN(d) || muDoubleScalarIsNaN(b))
  {
    n = 0;
    anew = rtNaN;
    apnd = b;
    n_too_large = false;
  } else if ((d == 0.0) || ((kd < b) && (d < 0.0)) || ((b < kd) && (d > 0.0))) {
    n = -1;
    anew = kd;
    apnd = b;
    n_too_large = false;
  } else if (muDoubleScalarIsInf(kd) || muDoubleScalarIsInf(b)) {
    n = 0;
    anew = rtNaN;
    apnd = b;
    if (muDoubleScalarIsInf(d) || (kd == b)) {
      n_too_large = true;
    } else {
      n_too_large = false;
    }

    n_too_large = !n_too_large;
  } else if (muDoubleScalarIsInf(d)) {
    n = 0;
    anew = kd;
    apnd = b;
    n_too_large = false;
  } else {
    anew = kd;
    ndbl = muDoubleScalarFloor((b - kd) / d + 0.5);
    apnd = kd + ndbl * d;
    if (d > 0.0) {
      cdiff = apnd - b;
    } else {
      cdiff = b - apnd;
    }

    absa = muDoubleScalarAbs(kd);
    absb = muDoubleScalarAbs(b);
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, absb)) {
      ndbl++;
      apnd = b;
    } else if (cdiff > 0.0) {
      apnd = kd + (ndbl - 1.0) * d;
    } else {
      ndbl++;
    }

    n_too_large = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      n = (int32_T)ndbl - 1;
    } else {
      n = -1;
    }
  }

  c_st.site = &f_emlrtRSI;
  if (!n_too_large) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &c_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  k = W->size[0] * W->size[1];
  W->size[0] = 1;
  W->size[1] = n + 1;
  emxEnsureCapacity(&b_st, (emxArray__common *)W, k, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (n + 1 > 0) {
    W->data[0] = anew;
    if (n + 1 > 1) {
      W->data[n] = apnd;
      k = n + (n < 0);
      if (k >= 0) {
        nm1d2 = (int32_T)((uint32_T)k >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)k >> 1);
      }

      for (k = 1; k < nm1d2; k++) {
        kd = (real_T)k * d;
        W->data[k] = anew + kd;
        W->data[n - k] = apnd - kd;
      }

      if (nm1d2 << 1 == n) {
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
  k = Amplitude1FR->size[0] * Amplitude1FR->size[1];
  Amplitude1FR->size[0] = (int32_T)numAmplSamples;
  emxEnsureCapacity(sp, (emxArray__common *)Amplitude1FR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (numAmplSamples >= 0.0) {
    kd = numAmplSamples;
  } else {
    kd = emlrtNonNegativeCheckR2012b(numAmplSamples, &b_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(kd, &emlrtDCI, sp);
  nm1d2 = W->size[1];
  k = Amplitude1FR->size[0] * Amplitude1FR->size[1];
  Amplitude1FR->size[1] = nm1d2;
  emxEnsureCapacity(sp, (emxArray__common *)Amplitude1FR, k, (int32_T)sizeof
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
  for (k = 0; k < nm1d2; k++) {
    Amplitude1FR->data[k] = 0.0;
  }

  k = Amplitude2FR->size[0] * Amplitude2FR->size[1];
  Amplitude2FR->size[0] = (int32_T)numAmplSamples;
  emxEnsureCapacity(sp, (emxArray__common *)Amplitude2FR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = W->size[1];
  k = Amplitude2FR->size[0] * Amplitude2FR->size[1];
  Amplitude2FR->size[1] = nm1d2;
  emxEnsureCapacity(sp, (emxArray__common *)Amplitude2FR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = (int32_T)numAmplSamples * W->size[1];
  for (k = 0; k < nm1d2; k++) {
    Amplitude2FR->data[k] = 0.0;
  }

  k = A1amplitudeFR->size[0] * A1amplitudeFR->size[1];
  A1amplitudeFR->size[0] = (int32_T)numAmplSamples;
  emxEnsureCapacity(sp, (emxArray__common *)A1amplitudeFR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = W->size[1];
  k = A1amplitudeFR->size[0] * A1amplitudeFR->size[1];
  A1amplitudeFR->size[1] = nm1d2;
  emxEnsureCapacity(sp, (emxArray__common *)A1amplitudeFR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = (int32_T)numAmplSamples * W->size[1];
  for (k = 0; k < nm1d2; k++) {
    A1amplitudeFR->data[k] = 0.0;
  }

  k = B1amplitudeFR->size[0] * B1amplitudeFR->size[1];
  B1amplitudeFR->size[0] = (int32_T)numAmplSamples;
  emxEnsureCapacity(sp, (emxArray__common *)B1amplitudeFR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = W->size[1];
  k = B1amplitudeFR->size[0] * B1amplitudeFR->size[1];
  B1amplitudeFR->size[1] = nm1d2;
  emxEnsureCapacity(sp, (emxArray__common *)B1amplitudeFR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = (int32_T)numAmplSamples * W->size[1];
  for (k = 0; k < nm1d2; k++) {
    B1amplitudeFR->data[k] = 0.0;
  }

  k = A2amplitudeFR->size[0] * A2amplitudeFR->size[1];
  A2amplitudeFR->size[0] = (int32_T)numAmplSamples;
  emxEnsureCapacity(sp, (emxArray__common *)A2amplitudeFR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = W->size[1];
  k = A2amplitudeFR->size[0] * A2amplitudeFR->size[1];
  A2amplitudeFR->size[1] = nm1d2;
  emxEnsureCapacity(sp, (emxArray__common *)A2amplitudeFR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = (int32_T)numAmplSamples * W->size[1];
  for (k = 0; k < nm1d2; k++) {
    A2amplitudeFR->data[k] = 0.0;
  }

  k = B2amplitudeFR->size[0] * B2amplitudeFR->size[1];
  B2amplitudeFR->size[0] = (int32_T)numAmplSamples;
  emxEnsureCapacity(sp, (emxArray__common *)B2amplitudeFR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = W->size[1];
  k = B2amplitudeFR->size[0] * B2amplitudeFR->size[1];
  B2amplitudeFR->size[1] = nm1d2;
  emxEnsureCapacity(sp, (emxArray__common *)B2amplitudeFR, k, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = (int32_T)numAmplSamples * W->size[1];
  for (k = 0; k < nm1d2; k++) {
    B2amplitudeFR->data[k] = 0.0;
  }

  i = 0;
  while (i <= W->size[1] - 1) {
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, numAmplSamples, mxDOUBLE_CLASS,
      (int32_T)numAmplSamples, &d_emlrtRTEI, sp);
    j = 1;
    while (j - 1 <= (int32_T)numAmplSamples - 1) {
      b_n = 1.0;
      amplitude1[0] = (1.0 + (real_T)(j - 1)) * aMax / numAmplSamples;
      amplitude1[1] = -(1.0 + (real_T)(j - 1)) * aMax / numAmplSamples;
      amplitude2[0] = -(1.0 + (real_T)(j - 1)) * aMax / numAmplSamples;
      amplitude2[1] = (1.0 + (real_T)(j - 1)) * aMax / numAmplSamples;
      k = W->size[1];
      nm1d2 = i + 1;
      emlrtDynamicBoundsCheckR2012b(nm1d2, 1, k, &c_emlrtBCI, sp);
      F[0] = ((((((((((((((((-3.0 * beta * amplitude2[0] * (amplitude1[1] *
        amplitude1[1]) - 4.0 * fc11) - 3.0 * beta * amplitude2[0] * (amplitude2
        [1] * amplitude2[1])) + 9.0 * beta * (amplitude2[0] * amplitude2[0]) *
                           amplitude1[0]) - 6.0 * beta * amplitude2[1] *
                          amplitude1[0] * amplitude1[1]) + 6.0 * beta *
                         amplitude2[0] * amplitude2[1] * amplitude1[1]) - 4.0 *
                        c1 * amplitude1[1] * W->data[i]) - 4.0 * c2 *
                       amplitude1[1] * W->data[i]) - 4.0 * m1 * amplitude1[0] *
                      (W->data[i] * W->data[i])) + 4.0 * c2 * amplitude2[1] *
                     W->data[i]) - 4.0 * k2 * amplitude2[0]) - 3.0 * beta *
                   muDoubleScalarPower(amplitude2[0], 3.0)) + 3.0 * beta *
                  muDoubleScalarPower(amplitude1[0], 3.0)) + 4.0 * k2 *
                 amplitude1[0]) + 4.0 * k1 * amplitude1[0]) + 3.0 * beta *
               amplitude1[0] * (amplitude1[1] * amplitude1[1])) - 9.0 * beta *
              amplitude2[0] * (amplitude1[0] * amplitude1[0])) + 3.0 * beta *
        (amplitude2[1] * amplitude2[1]) * amplitude1[0];
      F[1] = ((((((((((((((((-6.0 * beta * amplitude2[0] * amplitude1[0] *
        amplitude1[1] + 6.0 * beta * amplitude2[0] * amplitude2[1] * amplitude1
        [0]) + 4.0 * c1 * amplitude1[0] * W->data[i]) + 4.0 * c2 * amplitude1[0]
                           * W->data[i]) - 4.0 * m1 * amplitude1[1] * (W->data[i]
        * W->data[i])) - 4.0 * c2 * amplitude2[0] * W->data[i]) + 9.0 * beta *
                        (amplitude2[1] * amplitude2[1]) * amplitude1[1]) - 9.0 *
                       beta * amplitude2[1] * (amplitude1[1] * amplitude1[1])) -
                      3.0 * beta * (amplitude2[0] * amplitude2[0]) * amplitude2
                      [1]) + 3.0 * beta * (amplitude2[0] * amplitude2[0]) *
                     amplitude1[1]) - 3.0 * beta * amplitude2[1] * (amplitude1[0]
        * amplitude1[0])) + 3.0 * beta * (amplitude1[0] * amplitude1[0]) *
                   amplitude1[1]) + 4.0 * k2 * amplitude1[1]) + 4.0 * k1 *
                 amplitude1[1]) + 3.0 * beta * muDoubleScalarPower(amplitude1[1],
                 3.0)) - 3.0 * beta * muDoubleScalarPower(amplitude2[1], 3.0)) -
              4.0 * k2 * amplitude2[1]) - 4.0 * fc12;
      F[2] = ((((((((((((((-3.0 * beta * amplitude2[0] * (amplitude1[1] *
        amplitude1[1]) - 3.0 * beta * amplitude2[0] * (amplitude2[1] *
        amplitude2[1])) + 9.0 * beta * (amplitude2[0] * amplitude2[0]) *
                          amplitude1[0]) - 6.0 * beta * amplitude2[1] *
                         amplitude1[0] * amplitude1[1]) + 6.0 * beta *
                        amplitude2[0] * amplitude2[1] * amplitude1[1]) - 4.0 *
                       c2 * amplitude1[1] * W->data[i]) + 4.0 * m2 * amplitude2
                      [0] * (W->data[i] * W->data[i])) + 4.0 * c2 * amplitude2[1]
                     * W->data[i]) - 4.0 * k2 * amplitude2[0]) - 3.0 * beta *
                   muDoubleScalarPower(amplitude2[0], 3.0)) + 3.0 * beta *
                  muDoubleScalarPower(amplitude1[0], 3.0)) + 4.0 * fc21) + 4.0 *
                k2 * amplitude1[0]) + 3.0 * beta * amplitude1[0] * (amplitude1[1]
                * amplitude1[1])) - 9.0 * beta * amplitude2[0] * (amplitude1[0] *
               amplitude1[0])) + 3.0 * beta * (amplitude2[1] * amplitude2[1]) *
        amplitude1[0];
      F[3] = ((((((((((((((3.0 * beta * muDoubleScalarPower(amplitude1[1], 3.0)
                           - 6.0 * beta * amplitude2[0] * amplitude1[0] *
                           amplitude1[1]) + 6.0 * beta * amplitude2[0] *
                          amplitude2[1] * amplitude1[0]) + 4.0 * fc22) - 3.0 *
                        beta * muDoubleScalarPower(amplitude2[1], 3.0)) - 4.0 *
                       k2 * amplitude2[1]) + 4.0 * k2 * amplitude1[1]) - 3.0 *
                     beta * (amplitude2[0] * amplitude2[0]) * amplitude2[1]) +
                    9.0 * beta * (amplitude2[1] * amplitude2[1]) * amplitude1[1])
                   - 9.0 * beta * amplitude2[1] * (amplitude1[1] * amplitude1[1]))
                  - 4.0 * c2 * amplitude2[0] * W->data[i]) + 4.0 * m2 *
                 amplitude2[1] * (W->data[i] * W->data[i])) + 4.0 * c2 *
                amplitude1[0] * W->data[i]) - 3.0 * beta * amplitude2[1] *
               (amplitude1[0] * amplitude1[0])) + 3.0 * beta * (amplitude1[0] *
               amplitude1[0]) * amplitude1[1]) + 3.0 * beta * (amplitude2[0] *
        amplitude2[0]) * amplitude1[1];
      do {
        exitg1 = 0;
        kd = 0.0;
        scale = 2.2250738585072014E-308;
        for (k = 0; k < 4; k++) {
          absxk = muDoubleScalarAbs(F[k]);
          if (absxk > scale) {
            t = scale / absxk;
            kd = 1.0 + kd * t * t;
            scale = absxk;
          } else {
            t = absxk / scale;
            kd += t * t;
          }
        }

        kd = scale * muDoubleScalarSqrt(kd);
        if ((kd > tol) && (b_n <= maxIter)) {
          k = W->size[1];
          nm1d2 = i + 1;
          emlrtDynamicBoundsCheckR2012b(nm1d2, 1, k, &b_emlrtBCI, sp);
          F[0] = ((((((((((((((((-3.0 * beta * amplitude2[0] * (amplitude1[1] *
            amplitude1[1]) - 4.0 * fc11) - 3.0 * beta * amplitude2[0] *
                                (amplitude2[1] * amplitude2[1])) + 9.0 * beta *
                               (amplitude2[0] * amplitude2[0]) * amplitude1[0])
                              - 6.0 * beta * amplitude2[1] * amplitude1[0] *
                              amplitude1[1]) + 6.0 * beta * amplitude2[0] *
                             amplitude2[1] * amplitude1[1]) - 4.0 * c1 *
                            amplitude1[1] * W->data[i]) - 4.0 * c2 * amplitude1
                           [1] * W->data[i]) - 4.0 * m1 * amplitude1[0] *
                          (W->data[i] * W->data[i])) + 4.0 * c2 * amplitude2[1] *
                         W->data[i]) - 4.0 * k2 * amplitude2[0]) - 3.0 * beta *
                       muDoubleScalarPower(amplitude2[0], 3.0)) + 3.0 * beta *
                      muDoubleScalarPower(amplitude1[0], 3.0)) + 4.0 * k2 *
                     amplitude1[0]) + 4.0 * k1 * amplitude1[0]) + 3.0 * beta *
                   amplitude1[0] * (amplitude1[1] * amplitude1[1])) - 9.0 * beta
                  * amplitude2[0] * (amplitude1[0] * amplitude1[0])) + 3.0 *
            beta * (amplitude2[1] * amplitude2[1]) * amplitude1[0];
          F[1] = ((((((((((((((((-6.0 * beta * amplitude2[0] * amplitude1[0] *
            amplitude1[1] + 6.0 * beta * amplitude2[0] * amplitude2[1] *
            amplitude1[0]) + 4.0 * c1 * amplitude1[0] * W->data[i]) + 4.0 * c2 *
                               amplitude1[0] * W->data[i]) - 4.0 * m1 *
                              amplitude1[1] * (W->data[i] * W->data[i])) - 4.0 *
                             c2 * amplitude2[0] * W->data[i]) + 9.0 * beta *
                            (amplitude2[1] * amplitude2[1]) * amplitude1[1]) -
                           9.0 * beta * amplitude2[1] * (amplitude1[1] *
            amplitude1[1])) - 3.0 * beta * (amplitude2[0] * amplitude2[0]) *
                          amplitude2[1]) + 3.0 * beta * (amplitude2[0] *
            amplitude2[0]) * amplitude1[1]) - 3.0 * beta * amplitude2[1] *
                        (amplitude1[0] * amplitude1[0])) + 3.0 * beta *
                       (amplitude1[0] * amplitude1[0]) * amplitude1[1]) + 4.0 *
                      k2 * amplitude1[1]) + 4.0 * k1 * amplitude1[1]) + 3.0 *
                    beta * muDoubleScalarPower(amplitude1[1], 3.0)) - 3.0 * beta
                   * muDoubleScalarPower(amplitude2[1], 3.0)) - 4.0 * k2 *
                  amplitude2[1]) - 4.0 * fc12;
          F[2] = ((((((((((((((-3.0 * beta * amplitude2[0] * (amplitude1[1] *
            amplitude1[1]) - 3.0 * beta * amplitude2[0] * (amplitude2[1] *
            amplitude2[1])) + 9.0 * beta * (amplitude2[0] * amplitude2[0]) *
                              amplitude1[0]) - 6.0 * beta * amplitude2[1] *
                             amplitude1[0] * amplitude1[1]) + 6.0 * beta *
                            amplitude2[0] * amplitude2[1] * amplitude1[1]) - 4.0
                           * c2 * amplitude1[1] * W->data[i]) + 4.0 * m2 *
                          amplitude2[0] * (W->data[i] * W->data[i])) + 4.0 * c2 *
                         amplitude2[1] * W->data[i]) - 4.0 * k2 * amplitude2[0])
                       - 3.0 * beta * muDoubleScalarPower(amplitude2[0], 3.0)) +
                      3.0 * beta * muDoubleScalarPower(amplitude1[0], 3.0)) +
                     4.0 * fc21) + 4.0 * k2 * amplitude1[0]) + 3.0 * beta *
                   amplitude1[0] * (amplitude1[1] * amplitude1[1])) - 9.0 * beta
                  * amplitude2[0] * (amplitude1[0] * amplitude1[0])) + 3.0 *
            beta * (amplitude2[1] * amplitude2[1]) * amplitude1[0];
          F[3] = ((((((((((((((3.0 * beta * muDoubleScalarPower(amplitude1[1],
            3.0) - 6.0 * beta * amplitude2[0] * amplitude1[0] * amplitude1[1]) +
                              6.0 * beta * amplitude2[0] * amplitude2[1] *
                              amplitude1[0]) + 4.0 * fc22) - 3.0 * beta *
                            muDoubleScalarPower(amplitude2[1], 3.0)) - 4.0 * k2 *
                           amplitude2[1]) + 4.0 * k2 * amplitude1[1]) - 3.0 *
                         beta * (amplitude2[0] * amplitude2[0]) * amplitude2[1])
                        + 9.0 * beta * (amplitude2[1] * amplitude2[1]) *
                        amplitude1[1]) - 9.0 * beta * amplitude2[1] *
                       (amplitude1[1] * amplitude1[1])) - 4.0 * c2 * amplitude2
                      [0] * W->data[i]) + 4.0 * m2 * amplitude2[1] * (W->data[i]
                      * W->data[i])) + 4.0 * c2 * amplitude1[0] * W->data[i]) -
                   3.0 * beta * amplitude2[1] * (amplitude1[0] * amplitude1[0]))
                  + 3.0 * beta * (amplitude1[0] * amplitude1[0]) * amplitude1[1])
            + 3.0 * beta * (amplitude2[0] * amplitude2[0]) * amplitude1[1];
          k = W->size[1];
          nm1d2 = i + 1;
          emlrtDynamicBoundsCheckR2012b(nm1d2, 1, k, &emlrtBCI, sp);
          for (nm1d2 = 0; nm1d2 < 4; nm1d2++) {
            delta[nm1d2] = F[nm1d2];
          }

          dv0[0] = (((((((4.0 * k1 + 9.0 * beta * (amplitude1[0] * amplitude1[0]))
                         + 3.0 * beta * (amplitude1[1] * amplitude1[1])) + 3.0 *
                        beta * (amplitude2[1] * amplitude2[1])) - 6.0 * beta *
                       amplitude2[1] * amplitude1[1]) - 18.0 * beta *
                      amplitude2[0] * amplitude1[0]) + 9.0 * beta * (amplitude2
                      [0] * amplitude2[0])) + 4.0 * k2) - 4.0 * (W->data[i] *
            W->data[i]) * m1;
          dv0[4] = ((((6.0 * beta * amplitude1[0] * amplitude1[1] - 6.0 * beta *
                       amplitude2[0] * amplitude1[1]) - 6.0 * beta * amplitude2
                      [1] * amplitude1[0]) + 6.0 * beta * amplitude2[0] *
                     amplitude2[1]) - 4.0 * W->data[i] * c2) - 4.0 * W->data[i] *
            c1;
          dv0[8] = (((((-9.0 * beta * (amplitude2[0] * amplitude2[0]) - 4.0 * k2)
                       - 3.0 * beta * (amplitude1[1] * amplitude1[1])) - 3.0 *
                      beta * (amplitude2[1] * amplitude2[1])) + 6.0 * beta *
                     amplitude2[1] * amplitude1[1]) - 9.0 * beta * (amplitude1[0]
                     * amplitude1[0])) + 18.0 * beta * amplitude2[0] *
            amplitude1[0];
          dv0[12] = (((-6.0 * beta * amplitude2[0] * amplitude2[1] + 6.0 * beta *
                       amplitude2[1] * amplitude1[0]) - 6.0 * beta * amplitude1
                      [0] * amplitude1[1]) + 6.0 * beta * amplitude2[0] *
                     amplitude1[1]) + 4.0 * W->data[i] * c2;
          dv0[1] = ((((4.0 * W->data[i] * c1 + 4.0 * W->data[i] * c2) - 6.0 *
                      beta * amplitude2[1] * amplitude1[0]) + 6.0 * beta *
                     amplitude1[0] * amplitude1[1]) - 6.0 * beta * amplitude2[0]
                    * amplitude1[1]) + 6.0 * beta * amplitude2[0] * amplitude2[1];
          dv0[5] = (((((((-4.0 * (W->data[i] * W->data[i]) * m1 + 9.0 * beta *
                          (amplitude2[1] * amplitude2[1])) - 18.0 * beta *
                         amplitude2[1] * amplitude1[1]) + 3.0 * beta *
                        (amplitude2[0] * amplitude2[0])) + 3.0 * beta *
                       (amplitude1[0] * amplitude1[0])) + 9.0 * beta *
                      (amplitude1[1] * amplitude1[1])) + 4.0 * k1) + 4.0 * k2) -
            6.0 * beta * amplitude2[0] * amplitude1[0];
          dv0[9] = (((-4.0 * W->data[i] * c2 - 6.0 * beta * amplitude2[0] *
                      amplitude2[1]) + 6.0 * beta * amplitude2[0] * amplitude1[1])
                    - 6.0 * beta * amplitude1[0] * amplitude1[1]) + 6.0 * beta *
            amplitude2[1] * amplitude1[0];
          dv0[13] = (((((18.0 * beta * amplitude2[1] * amplitude1[1] - 9.0 *
                         beta * (amplitude1[1] * amplitude1[1])) - 3.0 * beta *
                        (amplitude2[0] * amplitude2[0])) - 3.0 * beta *
                       (amplitude1[0] * amplitude1[0])) - 4.0 * k2) - 9.0 * beta
                     * (amplitude2[1] * amplitude2[1])) + 6.0 * beta *
            amplitude2[0] * amplitude1[0];
          dv0[2] = (((((9.0 * beta * (amplitude1[0] * amplitude1[0]) + 3.0 *
                        beta * (amplitude1[1] * amplitude1[1])) + 3.0 * beta *
                       (amplitude2[1] * amplitude2[1])) - 6.0 * beta *
                      amplitude2[1] * amplitude1[1]) - 18.0 * beta * amplitude2
                     [0] * amplitude1[0]) + 9.0 * beta * (amplitude2[0] *
                     amplitude2[0])) + 4.0 * k2;
          dv0[6] = (((6.0 * beta * amplitude1[0] * amplitude1[1] - 6.0 * beta *
                      amplitude2[0] * amplitude1[1]) - 6.0 * beta * amplitude2[1]
                     * amplitude1[0]) + 6.0 * beta * amplitude2[0] * amplitude2
                    [1]) - 4.0 * W->data[i] * c2;
          dv0[10] = ((((((-9.0 * beta * (amplitude2[0] * amplitude2[0]) - 4.0 *
                          k2) - 3.0 * beta * (amplitude2[1] * amplitude2[1])) -
                        3.0 * beta * (amplitude1[1] * amplitude1[1])) + 6.0 *
                       beta * amplitude2[1] * amplitude1[1]) - 9.0 * beta *
                      (amplitude1[0] * amplitude1[0])) + 18.0 * beta *
                     amplitude2[0] * amplitude1[0]) + 4.0 * (W->data[i] *
            W->data[i]) * m2;
          dv0[14] = (((-6.0 * beta * amplitude2[0] * amplitude2[1] + 6.0 * beta *
                       amplitude2[1] * amplitude1[0]) - 6.0 * beta * amplitude1
                      [0] * amplitude1[1]) + 6.0 * beta * amplitude2[0] *
                     amplitude1[1]) + 4.0 * W->data[i] * c2;
          dv0[3] = (((-6.0 * beta * amplitude2[1] * amplitude1[0] + 6.0 * beta *
                      amplitude1[0] * amplitude1[1]) + 4.0 * W->data[i] * c2) -
                    6.0 * beta * amplitude2[0] * amplitude1[1]) + 6.0 * beta *
            amplitude2[0] * amplitude2[1];
          dv0[7] = (((((-18.0 * beta * amplitude2[1] * amplitude1[1] + 3.0 *
                        beta * (amplitude2[0] * amplitude2[0])) + 3.0 * beta *
                       (amplitude1[0] * amplitude1[0])) + 9.0 * beta *
                      (amplitude1[1] * amplitude1[1])) + 4.0 * k2) + 9.0 * beta *
                    (amplitude2[1] * amplitude2[1])) - 6.0 * beta * amplitude2[0]
            * amplitude1[0];
          dv0[11] = (((-6.0 * beta * amplitude2[0] * amplitude2[1] + 6.0 * beta *
                       amplitude2[0] * amplitude1[1]) - 4.0 * W->data[i] * c2) -
                     6.0 * beta * amplitude1[0] * amplitude1[1]) + 6.0 * beta *
            amplitude2[1] * amplitude1[0];
          dv0[15] = ((((((-9.0 * beta * (amplitude1[1] * amplitude1[1]) - 3.0 *
                          beta * (amplitude2[0] * amplitude2[0])) - 3.0 * beta *
                         (amplitude1[0] * amplitude1[0])) - 4.0 * k2) - 9.0 *
                       beta * (amplitude2[1] * amplitude2[1])) + 18.0 * beta *
                      amplitude2[1] * amplitude1[1]) + 4.0 * (W->data[i] *
                      W->data[i]) * m2) + 6.0 * beta * amplitude2[0] *
            amplitude1[0];
          for (k = 0; k < 4; k++) {
            for (nm1d2 = 0; nm1d2 < 4; nm1d2++) {
              dv1[nm1d2 + (k << 2)] = -dv0[nm1d2 + (k << 2)];
            }
          }

          st.site = &b_emlrtRSI;
          mldivide(&st, dv1, delta);
          for (k = 0; k < 2; k++) {
            amplitude1[k] += delta[k];
            amplitude2[k] += delta[2 + k];
          }

          b_n++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (b_n <= maxIter) {
        k = A1amplitudeFR->size[0];
        nm1d2 = A1amplitudeFR->size[1];
        n = 1 + i;
        if ((j >= 1) && (j < k)) {
          b_j = j;
        } else {
          b_j = emlrtDynamicBoundsCheckR2012b(j, 1, k, &d_emlrtBCI, sp);
        }

        if ((n >= 1) && (n < nm1d2)) {
          c_n = n;
        } else {
          c_n = emlrtDynamicBoundsCheckR2012b(n, 1, nm1d2, &e_emlrtBCI, sp);
        }

        A1amplitudeFR->data[(b_j + A1amplitudeFR->size[0] * (c_n - 1)) - 1] =
          amplitude1[0];
        k = A2amplitudeFR->size[0];
        nm1d2 = A2amplitudeFR->size[1];
        n = 1 + i;
        if ((j >= 1) && (j < k)) {
          c_j = j;
        } else {
          c_j = emlrtDynamicBoundsCheckR2012b(j, 1, k, &f_emlrtBCI, sp);
        }

        if ((n >= 1) && (n < nm1d2)) {
          d_n = n;
        } else {
          d_n = emlrtDynamicBoundsCheckR2012b(n, 1, nm1d2, &g_emlrtBCI, sp);
        }

        A2amplitudeFR->data[(c_j + A2amplitudeFR->size[0] * (d_n - 1)) - 1] =
          amplitude2[0];
        k = B1amplitudeFR->size[0];
        nm1d2 = B1amplitudeFR->size[1];
        n = 1 + i;
        if ((j >= 1) && (j < k)) {
          d_j = j;
        } else {
          d_j = emlrtDynamicBoundsCheckR2012b(j, 1, k, &h_emlrtBCI, sp);
        }

        if ((n >= 1) && (n < nm1d2)) {
          e_n = n;
        } else {
          e_n = emlrtDynamicBoundsCheckR2012b(n, 1, nm1d2, &i_emlrtBCI, sp);
        }

        B1amplitudeFR->data[(d_j + B1amplitudeFR->size[0] * (e_n - 1)) - 1] =
          amplitude1[1];
        k = B2amplitudeFR->size[0];
        nm1d2 = B2amplitudeFR->size[1];
        n = 1 + i;
        if ((j >= 1) && (j < k)) {
          e_j = j;
        } else {
          e_j = emlrtDynamicBoundsCheckR2012b(j, 1, k, &j_emlrtBCI, sp);
        }

        if ((n >= 1) && (n < nm1d2)) {
          f_n = n;
        } else {
          f_n = emlrtDynamicBoundsCheckR2012b(n, 1, nm1d2, &k_emlrtBCI, sp);
        }

        B2amplitudeFR->data[(e_j + B2amplitudeFR->size[0] * (f_n - 1)) - 1] =
          amplitude2[1];
        st.site = &c_emlrtRSI;
        kd = amplitude1[1] * amplitude1[1] + amplitude1[0] * amplitude1[0];
        if (kd < 0.0) {
          b_st.site = &ab_emlrtRSI;
          eml_error(&b_st);
        }

        k = Amplitude1FR->size[0];
        nm1d2 = Amplitude1FR->size[1];
        n = 1 + i;
        if ((j >= 1) && (j < k)) {
          f_j = j;
        } else {
          f_j = emlrtDynamicBoundsCheckR2012b(j, 1, k, &l_emlrtBCI, sp);
        }

        if ((n >= 1) && (n < nm1d2)) {
          g_n = n;
        } else {
          g_n = emlrtDynamicBoundsCheckR2012b(n, 1, nm1d2, &m_emlrtBCI, sp);
        }

        Amplitude1FR->data[(f_j + Amplitude1FR->size[0] * (g_n - 1)) - 1] =
          muDoubleScalarSqrt(kd);
        st.site = &d_emlrtRSI;
        kd = amplitude2[1] * amplitude2[1] + amplitude2[0] * amplitude2[0];
        if (kd < 0.0) {
          b_st.site = &ab_emlrtRSI;
          eml_error(&b_st);
        }

        k = Amplitude2FR->size[0];
        nm1d2 = Amplitude2FR->size[1];
        n = 1 + i;
        if ((j >= 1) && (j < k)) {
          g_j = j;
        } else {
          g_j = emlrtDynamicBoundsCheckR2012b(j, 1, k, &n_emlrtBCI, sp);
        }

        if ((n >= 1) && (n < nm1d2)) {
          h_n = n;
        } else {
          h_n = emlrtDynamicBoundsCheckR2012b(n, 1, nm1d2, &o_emlrtBCI, sp);
        }

        Amplitude2FR->data[(g_j + Amplitude2FR->size[0] * (h_n - 1)) - 1] =
          muDoubleScalarSqrt(kd);
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

/* End of code generation (NewtonRaphsonFR2dof.c) */
