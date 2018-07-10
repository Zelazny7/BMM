#include <Rdefines.h>
#include "000.api.h"
#include <R_ext/Rdynload.h>

// #define CALLDEF(name, n)  {"#name", (DL_FUNC) &name, n}

static R_CallMethodDef callMethods[] = {
  {"test_dense_matrix", (DL_FUNC) &test_dense_matrix, 3},
  {"bmm_dense_matrix", (DL_FUNC) &bmm_dense_matrix, 6},
  {NULL, NULL, 0}
};


void R_init_BMM(DllInfo *info) {
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}