#include "bitwise_op.h"

long long onesComplement(int dec) {
    return convertToBinary(~dec);
}

long long bitOp(int dec1, int dec2, enum OP op) {
    long long res;
    if(op == AND) {
        res = convertToBinary(dec1 & dec2);
    } else if(op == OR) {
        res = convertToBinary(dec1 | dec2);
    } else if(op == XOR) {
        res = convertToBinary(dec1 ^ dec2);
    }

    return res;
}


long long shift(int dec, int amountToShift, enum DIRECTION dir) {
    long long res;
    
    if(dir == LEFT) {
        res = convertToBinary(dec << amountToShift);
    } else if(dir == RIGHT) {
        res = convertToBinary(dec >> amountToShift);
    }

    return res;
}
