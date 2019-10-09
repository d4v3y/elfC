#include "sumAvg.h"

int sumOfArr() {

    int arrSum, i = 0;

    for(i = 0; i < ARR_SIZE; i++) {
        arrSum += arr[i];
    }

    return arrSum;
}

double avgOfArr() {

    int i = 0;
    double avgArr;
    
    for (i = 0; i < ARR_SIZE; i++) {
        avgArr = (avgArr + arr[i]) / ARR_SIZE;
    }

    return avgArr;
}