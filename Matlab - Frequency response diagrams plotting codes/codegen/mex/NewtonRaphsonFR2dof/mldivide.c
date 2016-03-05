/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "NewtonRaphsonFR2dof.h"
#include "mldivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_warning.h"

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = { 1, "mldivide",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRSInfo h_emlrtRSI = { 42, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo i_emlrtRSI = { 92, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo j_emlrtRSI = { 90, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo k_emlrtRSI = { 7, "eml_xgetrf",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\eml_xgetrf.m"
};

static emlrtRSInfo l_emlrtRSI = { 7, "eml_lapack_xgetrf",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\internal\\eml_lapack_xgetrf.m"
};

static emlrtRSInfo m_emlrtRSI = { 36, "eml_matlab_zgetrf",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

static emlrtRSInfo n_emlrtRSI = { 50, "eml_matlab_zgetrf",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

static emlrtRSInfo o_emlrtRSI = { 58, "eml_matlab_zgetrf",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

static emlrtRSInfo p_emlrtRSI = { 20, "eml_ixamax",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_ixamax.m"
};

static emlrtRSInfo q_emlrtRSI = { 1, "ixamax",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\ixamax.p"
};

static emlrtRSInfo r_emlrtRSI = { 1, "ixamax",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\ixamax.p"
};

static emlrtRSInfo s_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo t_emlrtRSI = { 41, "eml_xgeru",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgeru.m"
};

static emlrtRSInfo u_emlrtRSI = { 1, "xgeru",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgeru.p"
};

static emlrtRSInfo v_emlrtRSI = { 1, "xger",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xger.p"
};

static emlrtRSInfo w_emlrtRSI = { 1, "xger",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xger.p"
};

static emlrtRSInfo x_emlrtRSI = { 1, "xgerx",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xgerx.p"
};

static emlrtRSInfo y_emlrtRSI = { 76, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

/* Function Definitions */
void mldivide(const emlrtStack *sp, const real_T A[16], real_T B[4])
{
  real_T b_A[16];
  int8_T ipiv[4];
  int32_T kAcol;
  int32_T info;
  int32_T j;
  int32_T c;
  int32_T ix;
  real_T temp;
  int32_T k;
  real_T s;
  int32_T b;
  int32_T jy;
  boolean_T b_kAcol;
  int32_T ijA;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack l_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &g_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  l_st.prev = &k_st;
  l_st.tls = k_st.tls;
  b_st.site = &h_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  d_st.site = &k_emlrtRSI;
  e_st.site = &l_emlrtRSI;
  memcpy(&b_A[0], &A[0], sizeof(real_T) << 4);
  for (kAcol = 0; kAcol < 4; kAcol++) {
    ipiv[kAcol] = (int8_T)(1 + kAcol);
  }

  info = 0;
  for (j = 0; j < 3; j++) {
    c = j * 5;
    f_st.site = &m_emlrtRSI;
    g_st.site = &p_emlrtRSI;
    h_st.site = &q_emlrtRSI;
    kAcol = 0;
    ix = c;
    temp = muDoubleScalarAbs(b_A[c]);
    i_st.site = &r_emlrtRSI;
    for (k = 2; k <= 4 - j; k++) {
      ix++;
      s = muDoubleScalarAbs(b_A[ix]);
      if (s > temp) {
        kAcol = k - 1;
        temp = s;
      }
    }

    if (b_A[c + kAcol] != 0.0) {
      if (kAcol != 0) {
        ipiv[j] = (int8_T)((j + kAcol) + 1);
        ix = j;
        kAcol += j;
        for (k = 0; k < 4; k++) {
          temp = b_A[ix];
          b_A[ix] = b_A[kAcol];
          b_A[kAcol] = temp;
          ix += 4;
          kAcol += 4;
        }
      }

      b = (c - j) + 4;
      f_st.site = &n_emlrtRSI;
      for (jy = c + 1; jy + 1 <= b; jy++) {
        b_A[jy] /= b_A[c];
      }
    } else {
      info = j + 1;
    }

    f_st.site = &o_emlrtRSI;
    g_st.site = &t_emlrtRSI;
    h_st.site = &u_emlrtRSI;
    i_st.site = &v_emlrtRSI;
    j_st.site = &w_emlrtRSI;
    kAcol = c;
    jy = c + 4;
    for (k = 1; k <= 3 - j; k++) {
      temp = b_A[jy];
      if (b_A[jy] != 0.0) {
        ix = c + 1;
        b = (kAcol - j) + 8;
        k_st.site = &x_emlrtRSI;
        if (kAcol + 6 > b) {
          b_kAcol = false;
        } else {
          b_kAcol = (b > 2147483646);
        }

        if (b_kAcol) {
          l_st.site = &s_emlrtRSI;
          check_forloop_overflow_error(&l_st);
        }

        for (ijA = kAcol + 5; ijA + 1 <= b; ijA++) {
          b_A[ijA] += b_A[ix] * -temp;
          ix++;
        }
      }

      jy += 4;
      kAcol += 4;
    }
  }

  if ((info == 0) && (!(b_A[15] != 0.0))) {
    info = 4;
  }

  if (info > 0) {
    c_st.site = &i_emlrtRSI;
    d_st.site = &y_emlrtRSI;
    eml_warning(&d_st);
  }

  for (kAcol = 0; kAcol < 3; kAcol++) {
    if (ipiv[kAcol] != kAcol + 1) {
      temp = B[kAcol];
      B[kAcol] = B[ipiv[kAcol] - 1];
      B[ipiv[kAcol] - 1] = temp;
    }
  }

  for (k = 0; k < 4; k++) {
    kAcol = k << 2;
    if (B[k] != 0.0) {
      for (jy = k + 1; jy + 1 < 5; jy++) {
        B[jy] -= B[k] * b_A[jy + kAcol];
      }
    }
  }

  for (k = 3; k > -1; k += -1) {
    kAcol = k << 2;
    if (B[k] != 0.0) {
      B[k] /= b_A[k + kAcol];
      for (jy = 0; jy + 1 <= k; jy++) {
        B[jy] -= B[k] * b_A[jy + kAcol];
      }
    }
  }
}

/* End of code generation (mldivide.c) */
