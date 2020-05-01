#include "flex_arr.h"

void printArr(struct my_array *my_arr) {
    printf("Elements in my arr: ");
    for(int i = 0; i < my_arr->size; i++) {
        printf("%d", my_arr->arr[i]);
        if((i+1) < my_arr->size) {
            printf(", ");
        } else {
            printf("\n");
        }

    }
}
