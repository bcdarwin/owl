/*
 * OWL - an OCaml numerical library for scientific computing
 * Copyright (c) 2016 Liang Wang <liang.wang@cl.cam.ac.uk>
 */

#ifdef __cplusplus
extern "C"
{
#endif

  /**************************** SparseMatrix_D ****************************/

  struct eigen_spmat_d {};

  struct eigen_spmat_d* c_eigen_spmat_d_new(int rows, int cols);
  void c_eigen_spmat_d_delete(struct eigen_spmat_d *m);
  int c_eigen_spmat_d_rows(struct eigen_spmat_d *m);
  int c_eigen_spmat_d_cols(struct eigen_spmat_d *m);
  double c_eigen_spmat_d_get(const struct eigen_spmat_d *m, int i, int j);


#ifdef __cplusplus
} // end extern "C"
#endif
