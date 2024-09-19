#include "grains.h"
#include <stdio.h>



uint64_t square(uint8_t index) {

    uint64_t grains = 1;

    if ((index > 64) || (index <= 0)) {
        return 0;
    }

    for (int i = 1; i < index; i++) {
        grains = grains * 2;
    }
    return grains;
}

uint64_t total() {

    uint64_t total = 0;

    for (int i = 1; i <= 64; i++)
    {
        total+= (square(i));
    }

    return total;
    
}

/* int main() {


    square(64);

    return 0;
} */