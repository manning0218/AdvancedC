#include <stdio.h>

struct my_array {
    size_t size;
    int arr[];
};

void printArr(struct my_array *my_arr);
