#include <stdio.h>

char *my_strrchr(const char *s, int c)
{
    int i = 0;
    char *last = NULL;

    while (s[i] != '\0')
    {
        if (s[i] == c)
            last = (char *)&s[i];
        i++;
    }

    if (s[i] == c)
        return (char *)&s[i];

    return last;
}
