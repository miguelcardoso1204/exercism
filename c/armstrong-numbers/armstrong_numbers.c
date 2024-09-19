#include "armstrong_numbers.h"
#include <stdio.h>
#include <math.h>

bool is_armstrong_number(int candidate) {

    int aux = candidate;
    int aux2 = candidate;
    int numberOfDigits = 0;
    int result = 0;


    //count digits in number  
    for (int i = 0; aux > 0; i++)
    {
        numberOfDigits++;
        aux = aux / 10;
    }

    //sum of each number to the power of number of digits
    for (int i = 0; i < numberOfDigits; i++)
    {
        result = result + pow((aux2 % 10), numberOfDigits);
        aux2 = aux2 / 10;
    }


    if (result == candidate) {
        return true;
    }

    return false;
}