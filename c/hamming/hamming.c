#include "hamming.h"
#include "string.h"


int compute (const char DNA1[], const char DNA2[]) {

    if ((DNA1 == NULL) || (DNA2 == NULL)) {
        return -1;
    }

    int DNA1Length = strlen(DNA1);
    int DNA2Length = strlen(DNA2);

    if (DNA1Length != DNA2Length) {
        return -1;
    }

    int differences = 0;

    for (int i = 0; i < DNA1Length; i++)
    {
        if (DNA1[i] != DNA2[i]) {
            differences++;
        }
    }
    
    return differences;
}