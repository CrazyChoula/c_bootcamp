#include <stddef.h>
#include <stdio.h>

void *my_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    if (d < s)
    {
        int i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        int i = n - 1;
        while (i >= 0)
        {
            d[i] = s[i];
            i--;
        }
    }

    return dest;
}
