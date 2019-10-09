#include "maxArr.h"
#define SIZE 5

extern int arr[SIZE];

int maxOfArr() {
    
    int i, max = arr[0];
 
    for (i = 1; i < SIZE; i++) {

        if (arr[i] > max) {
            max  = arr[i];
        }
    }

    return max;
}