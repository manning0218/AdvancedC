#include <stdio.h>
#include <math.h>

#ifndef __STDC_NO_COMPLEX__
#include <complex.h>
#define SUPPORTED 1
#else
#define SUPPORTED 0
#endif

#define I_SQUARED I*I

double complex square_imaginary(double complex cmplx_num);


double complex square_imaginary_pow(double complex cmplx_num);

double complex euler_form();

double complex conjugate(double complex cmplx_num);

void print_complex(double complex cmplx_num);
