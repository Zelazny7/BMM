/* C-level API that is called from R */

#include "R.h"
#include "Rinternals.h"

SEXP test_dense_matrix(SEXP m, SEXP n, SEXP d);

SEXP bmm_dense_matrix(SEXP m, SEXP n, SEXP d, SEXP K, SEXP max_iter, SEXP verbose);