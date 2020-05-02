#include "error_recover.h"

#include <stdio.h>

extern jmp_buf buf;

int main(int argc, char** argv) {
    int i = 0;
    while(!setjmp(buf)) {
        printf("Count: %d\n", i);
        i = error_recovery(i+1);
    }

    printf("Error occurred.\n");

    return 0;
}
