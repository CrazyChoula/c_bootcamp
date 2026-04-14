#include <stddef.h>
#include <stdio.h>

void *my_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    int i = 0;

    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return (void *)&ptr[i];
        i++;
    }

    return NULL;
}
