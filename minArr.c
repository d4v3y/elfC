#include "minArr.h"
#define SIZE_A 5

extern int arr[SIZE_A];

int minOfArr() {

    int i, min = arr[0];
 
    for (i = 1; i < SIZE_A; i++) {

        if (arr[i] < min) {
            min  = arr[i];
        }
    }

    return min;
}