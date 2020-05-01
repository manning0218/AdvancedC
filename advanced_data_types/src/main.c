#include "vla.h"
#include "flex_arr.h"
#include "complex_nums.h"

#include <stdio.h>
#include <malloc.h>

int main(int argc, char** argv) {
    size_t size = 0;
    int i = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%zd", &size);

    int arr[size]; 

    struct my_array *my_arr; 

    my_arr = malloc(sizeof(struct my_array) + size * sizeof(int));
    my_arr->size = size;

    while(i < size) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
        my_arr->arr[i] = arr[i];
        ++i;
    }

    printf("The sums of the values entered is: %d\n", sum(size, arr));

    printArr(my_arr);

    // Checks if complex numbers are supported by compiler
    if(SUPPORTED) {
        printf("Enter the an imaginary number.\n");
        double r;
        double i;
        printf("Enter the real part: ");
        scanf("%lf", &r);
        printf("Enter the imaginary part: ");
        scanf("%lf", &i);

        double complex cmplx_num = r + i*I;

        double complex my_sqr_i = square_imaginary(cmplx_num);
        double complex pow_sqr_i = square_imaginary_pow(cmplx_num);
        double complex euler_at_neq_one = euler_form();
        double complex conj1 = conjugate(1+2*I);
        double complex conj2 = conjugate(1-2*I);

        printf("My square imag: ");
        print_complex(my_sqr_i);
        printf("Pow square imag: ");
        print_complex(pow_sqr_i);
        printf("Euler's result at PI=acos(-1): ");
        print_complex(euler_at_neq_one);
        printf("Conjugate of 1 + 2i: ");
        print_complex(conj1);
        printf("Conjugate of 1 - 2i: ");
        print_complex(conj2);
    }

    return 0;
}
