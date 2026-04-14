#include <stddef.h>
#include <stdio.h>

int my_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *a = (unsigned char *)s1;
    unsigned char *b = (unsigned char *)s2;
    int i = 0;

    while (i < n)
    {
        if (a[i] != b[i])
            return a[i] - b[i];
        i++;
    }

    return 0;
}

