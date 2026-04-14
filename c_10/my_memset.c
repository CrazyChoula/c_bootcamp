#include <stddef.h>
#include <stdio.h>

void *my_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    int i = 0;

    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }

    return s;
}

