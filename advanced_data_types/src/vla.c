#include "vla.h"

int sum(const size_t size, int arr[size]) {
    int res = 0;
    for(int i = 0; i < size; ++i) {
        res += arr[i];
    } 

    return res;
}
