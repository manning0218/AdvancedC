#include "toggle.h"

unsigned int readBit(int num, int n) {
    int mask = 1 << n;
    int bit = 0;
    if((num & mask) == mask) {
        bit = 1;
    }

    return bit;
}

int setBit(int num, int n) {
    int mask = 1 << n;

    return num | mask;
}

int unsetBit(int num, int n) {
    int mask = 1 << n;

    return num & ~(mask);
}

int toggleBit(int num, int n) {
    int mask = 1 << n;

    return num ^ mask;
}
