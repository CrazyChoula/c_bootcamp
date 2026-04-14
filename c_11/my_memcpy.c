#include <stddef.h>
#include <stdio.h>

void *my_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    int i = 0;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }

    return dest;
}
