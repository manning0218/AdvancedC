#ifndef BITWISE_OP_H
#define BITWISE_OP_H

#include "convert.h"

enum OP {AND = 0, OR, XOR};
enum DIRECTION {LEFT = 0, RIGHT};

long long onesComplement(int dec); 

long long bitOp(int dec1, int dec2, enum OP op); 

long long shift(int dec1, int amountToShift, enum DIRECTION dir);

#endif
