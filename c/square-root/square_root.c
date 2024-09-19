#include "square_root.h"
#include <math.h>

double square_root(int n){

    double result = 1;
    double aux = 1;
    double accuracy = 0.0001;

    while (fabs(((result * result) - (double)n)) > accuracy) {
        aux = result;
        result = ((double)1/2) * (aux + ((double)n / aux));
    }

    return result;
} 