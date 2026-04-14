#include <stdio.h>

char *my_strcpy(char *dest, const char *src) {
    size_t i = 0;
    
    while (1) {
        dest[i] = src[i];
        if (src[i] == '\0') break;  
        i++;
    }
    return dest;
}

