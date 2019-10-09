#include <stdio.h>
#include <stdlib.h>
#include "sumAvg.h"
#include "maxArr.h"
#include "minArr.h"

const int ARR_SIZE = 5;
int arr[ARR_SIZE];

int main (int argc, char *argv[]) {

    float avgA;
    int i, k, j, sumA, maxA, minA;
    srand(0);   // Seed random number generator

    // Insert random numbers into array
    for (i = 0; i < ARR_SIZE; i++) {
        arr[i] = rand() % 100;
        printf("%d\n", arr[i]);
    }

    sumA = sumOfArr();
    printf("The sum of the array is %d\n", sumA);

    avgA = avgOfArr();
    printf("The average of the array is %f\n", avgA);

    maxA = maxOfArr();
    printf("The maximum of the array is %d\n", maxA);

    minA = minOfArr();
    printf("The minimum of the array is %d\n", minA);

    return 0;
}