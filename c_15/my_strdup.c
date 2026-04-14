#include <stdio.h>
#include <stdlib.h>

char *my_strdup(const char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    char *copy = malloc(len + 1);
    if (copy == NULL)
        return NULL;

    int i = 0;
    while (i <= len)
    {
        copy[i] = s[i];
        i++;
    }

    return copy;
}

