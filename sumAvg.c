#include "sumAvg.h"

const int A_SIZE = 5;
extern int arr[A_SIZE];

int sumOfArr() {

    int i, arrSum = 0;

    for (i = 0; i < A_SIZE; i++) {
        arrSum += arr[i];
    }

    return arrSum;
}

float avgOfArr() {

    int arrAvg = 0;
    int arrS = sumOfArr();

    arrAvg = arrS / A_SIZE;

    return arrAvg;
}