#include "convert.h"

#include <math.h>

int convertToDec(long long bin) {
    int dec = 0, i = 0, remainder = 0;

    while(bin != 0) {
        remainder = bin % 10;
        bin /= 10;
        dec += remainder*pow(2, i);
        ++i;
    }

    return dec;
}

long long convertToBinary(int dec) {
    long long bin = 0;
    int i = 0, remainder = 0;

    while(dec != 0) {
        remainder = abs(dec % 2);
        dec /= 2;
        bin += remainder*pow(10, i);
        ++i;
    }

    return bin;
}
