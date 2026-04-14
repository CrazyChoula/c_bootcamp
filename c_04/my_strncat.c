#include <stddef.h>
#include <stdio.h>

char *my_strncat(char *dest, const char *src, size_t n)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
        i++;

    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return dest;
}
