#include "error_recovery.h"

int error_recovery(int i) {
    if(i < 5) 
        ;
    else
        longjmp(buf, -1);

    return i;
}
