#ifndef ERROR_RECOVERY_H
#define ERROR_RECOVERY_H

#include <setjmp.h>

jmp_buf buf;

int error_recovery(int i);

#endif
