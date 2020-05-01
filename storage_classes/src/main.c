#include <stdio.h>

#include "challenge.h"

// Declared in challenge1.c
extern float program_global;

int loop_counter = 0;

int main(int argc, char** argv) {
    int i = 3;
    extern void display();
    printf("Challenge1\n");
    while(i > 0) {
        printf("Iter %d\n", i);
        printf("program global before: %2.f\n", program_global);
        program_global = 3.14;
        printf("program global after: %.2f\n", program_global);
        
        printVars();
        --i;
        printf("\n");
    }

    printf("\n\n\nChallenge2\n");
    printf("%d\n", sum(25));
    printf("%d\n", sum(15));
    printf("%d\n", sum(30));


    printf("\n\n\nChallenge3\n");
    for(i = 0; i < 5; ++i) {
        display();
    }

    return 0;
}
