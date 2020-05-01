#include "complex_nums.h"

double complex square_imaginary(double complex cmplx_num) {
    double i = cimagf(cmplx_num);
    double complex res = crealf(cmplx_num) + i*i*I_SQUARED;
    
    return res;
}

double complex square_imaginary_pow(double complex cmplx_num) {
    double i = cimagf(cmplx_num);
    printf("ci squared: %.2lf\n", pow(i, 2));
    printf("i squared: %.2lf\n", pow(I, 2));
    double complex res = crealf(cmplx_num) + (pow(i, 2) * cpow(I, 2));

    return res;
}

double complex euler_form() {
    double PI = acos(-1);
    double complex res = cexp(I*PI);

    return res;
}

double complex conjugate(double complex cmplx_num) {
    double complex res = crealf(cmplx_num) + -1*cimagf(cmplx_num)*I;

    return res;
}

void print_complex(double complex cmplx_num) {
    char sign;
    double i = cimagf(cmplx_num);
    if(cimagf(cmplx_num) < 0) {
        sign = '-';
        i = i*-1;
    } else {
        sign = '+';
    }

    printf("%.2lf %c %.2lfi\n", crealf(cmplx_num), sign, i);
}
