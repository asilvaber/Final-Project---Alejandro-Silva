/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NewtonRaphsonNMB2dof.c
 *
 * Code generation for function 'NewtonRaphsonNMB2dof'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonNMB2dof.h"
#include "eml_warning.h"
#include "NewtonRaphsonNMB2dof_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 14, "NewtonRaphsonNMB2dof",
  "C:\\\\Users\\\\admin\\\\Dropbox\\\\PFC - Alejandro Silva\\\\C\xc3\xb3\x64igo Fuente\\\\Matlab - Frequency response curves (Matlab + Fortran + C. Not compiled yet)\\\\NewtonRaphsonNMB2dof.m"
};

static emlrtRSInfo b_emlrtRSI = { 1, "mldivide",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRSInfo c_emlrtRSI = { 54, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo d_emlrtRSI = { 155, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo e_emlrtRSI = { 76, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

/* Function Definitions */
void NewtonRaphsonNMB2dof(const emlrtStack *sp, real_T tol, real_T m1, real_T m2,
  real_T k1, real_T k2, real_T beta, real_T aMax, real_T maxIter, const real_T
  W[200], real_T Amplitude1NMB[200], real_T Amplitude2NMB[200])
{
  int32_T r1;
  int32_T i;
  real_T n;
  real_T amplitude[2];
  real_T F[2];
  int32_T exitg1;
  real_T a21;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T J[4];
  int32_T r2;
  real_T Y[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  for (r1 = 0; r1 < 200; r1++) {
    Amplitude1NMB[r1] = 0.0;
    Amplitude2NMB[r1] = 0.0;
  }

  i = 0;
  while (i < 200) {
    n = 1.0;
    amplitude[0] = aMax;
    amplitude[1] = -aMax;
    F[0] = ((((((-3.0 * beta * muDoubleScalarPower(-aMax, 3.0) - 4.0 * k2 *
                 -aMax) + 4.0 * m2 * aMax) + 3.0 * beta * muDoubleScalarPower
               (aMax, 3.0)) - 9.0 * beta * -aMax * (aMax * aMax)) + 9.0 * beta *
             (-aMax * -aMax) * aMax) + 4.0 * k2 * aMax) - 4.0 * m1 * aMax * (W[i]
      * W[i]);
    F[1] = (((((-3.0 * beta * muDoubleScalarPower(-aMax, 3.0) - 4.0 * k2 * -aMax)
               + 3.0 * beta * muDoubleScalarPower(aMax, 3.0)) - 9.0 * beta *
              -aMax * (aMax * aMax)) + 9.0 * beta * (-aMax * -aMax) * aMax) +
            4.0 * k2 * aMax) + 4.0 * k1 * -aMax * (W[i] * W[i]);
    do {
      exitg1 = 0;
      a21 = 0.0;
      scale = 2.2250738585072014E-308;
      for (r1 = 0; r1 < 2; r1++) {
        absxk = muDoubleScalarAbs(F[r1]);
        if (absxk > scale) {
          t = scale / absxk;
          a21 = 1.0 + a21 * t * t;
          scale = absxk;
        } else {
          t = absxk / scale;
          a21 += t * t;
        }
      }

      a21 = scale * muDoubleScalarSqrt(a21);
      if ((a21 > tol) && (n <= maxIter)) {
        F[0] = ((((((-3.0 * beta * muDoubleScalarPower(amplitude[1], 3.0) - 4.0 *
                     k2 * amplitude[1]) + 4.0 * m2 * amplitude[0]) + 3.0 * beta *
                   muDoubleScalarPower(amplitude[0], 3.0)) - 9.0 * beta *
                  amplitude[1] * (amplitude[0] * amplitude[0])) + 9.0 * beta *
                 (amplitude[1] * amplitude[1]) * amplitude[0]) + 4.0 * k2 *
                amplitude[0]) - 4.0 * m1 * amplitude[0] * (W[i] * W[i]);
        F[1] = (((((-3.0 * beta * muDoubleScalarPower(amplitude[1], 3.0) - 4.0 *
                    k2 * amplitude[1]) + 3.0 * beta * muDoubleScalarPower
                   (amplitude[0], 3.0)) - 9.0 * beta * amplitude[1] *
                  (amplitude[0] * amplitude[0])) + 9.0 * beta * (amplitude[1] *
                  amplitude[1]) * amplitude[0]) + 4.0 * k2 * amplitude[0]) + 4.0
          * k1 * amplitude[1] * (W[i] * W[i]);
        J[0] = ((((4.0 * m2 + 9.0 * beta * (amplitude[0] * amplitude[0])) - 18.0
                  * beta * amplitude[1] * amplitude[0]) + 9.0 * beta *
                 (amplitude[1] * amplitude[1])) + 4.0 * k2) - 4.0 * (W[i] * W[i])
          * m1;
        J[2] = ((-9.0 * beta * (amplitude[1] * amplitude[1]) - 4.0 * k2) + 18.0 *
                beta * amplitude[1] * amplitude[0]) - 9.0 * beta * (amplitude[0]
          * amplitude[0]);
        J[1] = ((4.0 * k2 + 9.0 * beta * (amplitude[0] * amplitude[0])) + 9.0 *
                beta * (amplitude[1] * amplitude[1])) - 18.0 * beta * amplitude
          [0] * amplitude[1];
        J[3] = (((-9.0 * beta * (amplitude[1] * amplitude[1]) - 4.0 * k2) + 18.0
                 * beta * amplitude[1] * amplitude[0]) - 9.0 * beta *
                (amplitude[0] * amplitude[0])) + 4.0 * (W[i] * W[i]) * k1;
        st.site = &emlrtRSI;
        b_st.site = &b_emlrtRSI;
        c_st.site = &c_emlrtRSI;
        if (muDoubleScalarAbs(J[1]) > muDoubleScalarAbs(J[0])) {
          r1 = 1;
          r2 = 0;
        } else {
          r1 = 0;
          r2 = 1;
        }

        a21 = J[r2] / J[r1];
        scale = J[2 + r2] - a21 * J[2 + r1];
        if ((scale == 0.0) || (J[r1] == 0.0)) {
          d_st.site = &d_emlrtRSI;
          e_st.site = &e_emlrtRSI;
          eml_warning(&e_st);
        }

        Y[1] = (F[r2] - F[r1] * a21) / scale;
        Y[0] = (F[r1] - Y[1] * J[2 + r1]) / J[r1];
        for (r1 = 0; r1 < 2; r1++) {
          amplitude[r1] -= Y[r1];
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
      Amplitude1NMB[i] = amplitude[0];
      Amplitude2NMB[i] = amplitude[1];
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (NewtonRaphsonNMB2dof.c) */
