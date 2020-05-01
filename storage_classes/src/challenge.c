#include "challenge.h"

float program_global = 2.0;
static double file_global = 0;

static void helper() {
    file_global++;
}

void printVars() {
    int tmp = 3;
    static float count_called = 0;
    register int reg = 4;
    file_global++;

    printf("local tmp: %d\n", tmp);
    printf("static global before: %.2f\n", file_global);
    helper();
    printf("static global after: %.2f\n", file_global);
    printf("extern global in printVars: %2.f\n", program_global);
    printf("static local in printVars: %2.f\n", count_called);
    printf("register int: %d\n", reg);

    count_called += 1.0;
}

int sum(int num) {
    static int val = 0;
    val += num;
    return val;
}

extern void display() {
    extern int loop_counter;
    printf("loop_counter: %d\n", ++loop_counter);
}
