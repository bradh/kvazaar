#ifndef FAST_COEFF_COST_H_
#define FAST_COEFF_COST_H_

#include <stdio.h>
#include "kvazaar.h"
// #include "encoderstate.h"

#define MAX_FAST_COEFF_COST_QP 50

typedef struct {
  uint64_t wts_by_qp[MAX_FAST_COEFF_COST_QP];
} fast_coeff_table_t;

// Weights for 4 buckets (coeff 0, coeff 1, coeff 2, coeff >= 3), for QPs from
// 0 to MAX_FAST_COEFF_COST_QP
static const float default_fast_coeff_cost_wts[][4] = {
  // Just extend it by stretching the first actual values..
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.134012, 4.207784, 3.431633, 6.556149},
  // up to here
  {0.134012, 4.207784, 3.431633, 6.556149},
  {0.122972, 4.278606, 3.398710, 6.527168},
  {0.109453, 4.373356, 3.335091, 6.499565},
  {0.095884, 4.485212, 3.217406, 6.488617},
  {0.083252, 4.591962, 3.088931, 6.481644},
  {0.071878, 4.674704, 2.989839, 6.464058},
  {0.060957, 4.743912, 2.922084, 6.438406},
  {0.050599, 4.799877, 2.901414, 6.405108},
  {0.040942, 4.848476, 2.899774, 6.368717},
  {0.033205, 4.882974, 2.908347, 6.329815},
  {0.026834, 4.909299, 2.913517, 6.292657},
  {0.022367, 4.924819, 2.919600, 6.257252},
  {0.018591, 4.935092, 2.946776, 6.214822},
  {0.015312, 4.939410, 3.028364, 6.154816},
  {0.012358, 4.942173, 3.127025, 6.094022},
  {0.010188, 4.945157, 3.215646, 6.051293},
  {0.008442, 4.948889, 3.293383, 6.020484},
  {0.007136, 4.954426, 3.360035, 6.000430},
  {0.006015, 4.962144, 3.418237, 5.983726},
  {0.005135, 4.974654, 3.461126, 5.970288},
  {0.004360, 4.989681, 3.500489, 5.958140},
  {0.003711, 5.006930, 3.545568, 5.948645},
  {0.003128, 5.024501, 3.596080, 5.941973},
  {0.002656, 5.043468, 3.649575, 5.940536},
  {0.002246, 5.065988, 3.698400, 5.940656},
  {0.001924, 5.097480, 3.733661, 5.941015},
  {0.001638, 5.133176, 3.763985, 5.942503},
  {0.001392, 5.170478, 3.796842, 5.954164},
  {0.001166, 5.206007, 3.835210, 5.980734},
  {0.000987, 5.234321, 3.878463, 6.031444},
  {0.000853, 5.255265, 3.915359, 6.080584},
  // Same here
  {0.000853, 5.255265, 3.915359, 6.080584},
  {0.000853, 5.255265, 3.915359, 6.080584},
  {0.000853, 5.255265, 3.915359, 6.080584},
  {0.000853, 5.255265, 3.915359, 6.080584},
  {0.000853, 5.255265, 3.915359, 6.080584},
  {0.000853, 5.255265, 3.915359, 6.080584},
  {0.000853, 5.255265, 3.915359, 6.080584},
};

typedef struct encoder_state_t encoder_state_t;

int kvz_fast_coeff_table_parse(fast_coeff_table_t *fast_coeff_table, FILE *fast_coeff_table_f);
void kvz_fast_coeff_use_default_table(fast_coeff_table_t *fast_coeff_table);
uint64_t kvz_fast_coeff_get_weights(const encoder_state_t *state);

#endif // FAST_COEFF_COST_H_
