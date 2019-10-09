#include <stdio.h>
#include <stdlib.h>
#include "sumAvg.h"
#include "maxArr.h"
#include "minArr.h"

const int ARR_SIZE = 200;
int arr[ARR_SIZE];

int main (int argc, char *argv[]) {

    int i;
    srand(0);

    for (i = 0; i < ARR_SIZE; i++) {
        arr[i] = rand();
        printf("%d\n", arr[i]);
    }

    int sumA = sumOfArr();
    printf("%d", sumA);

    return 0;
}