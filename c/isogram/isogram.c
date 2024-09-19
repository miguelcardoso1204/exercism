#include "isogram.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_isogram(const char string[]) {

    if (string == NULL) {
        return false;
    }


    int string_length = strlen(string);

    if (string_length == 1) {
        return true;
    }
    
    char a, b;

    for (int i = 0; i < string_length - 1; i++)
    {
        for (int j = i + 1; j < string_length; j++)
        {
            a = tolower(string[i]);
            b = tolower(string[j]);

            if ((a == b) && (a != 45) && (a != 32)) {
                return false;
            }
        } 
    }
    return true;
}