#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int **ptr);

int main() {
    // Challenge 1
    int rand_num = 121;
    int* rn_ptr = (int*) malloc(sizeof(int));
    rn_ptr = &rand_num;

    int** rn_dptr = (int**)malloc(sizeof(int*));
    rn_dptr = &rn_ptr;

    printf("rand_num val: %d\n", rand_num);
    printf("ptr rand_num val: %d\n", *rn_ptr);
    printf("dptr rand_num val: %d\n\n", **rn_dptr);

    printf("rand_num addr: %p\n", &rand_num);
    printf("ptr rand_num addr: %p\n", &(*rn_ptr));
    printf("dptr rand_num addr: %p\n\n", &(**rn_dptr));

    printf("rn_ptr val: %p\n", rn_ptr);
    printf("dptr rn_ptr val: %p\n\n", *rn_dptr);

    printf("rn_ptr addr: %p\n", &rn_ptr);
    printf("dptr rn_ptr addr: %p\n\n", &(*rn_dptr));

    printf("rn_dptr val: %p\n", rn_dptr);
    printf("rn_dptr addr: %p\n\n", &rn_dptr);

    rn_dptr = NULL;
    rn_ptr = NULL;
    free(rn_dptr);
    free(rn_ptr);

    // Challenge 2
    int* ptr = NULL;
    allocateMemory(&ptr);
    *ptr = 5;
    printf("ptr val: %d\n", *ptr);

    ptr = NULL;
    free(ptr);

    return 0;
}

void allocateMemory(int **ptr) {
    *ptr = (int*)malloc(sizeof(int));
}
