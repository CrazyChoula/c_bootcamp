#include <stdio.h>

char *my_strtok(char *str, const char *delim)
{
    static char *save = NULL;
    int i, j;

    if (str != NULL)
        save = str;

    if (save == NULL || *save == '\0')
        return NULL;

    while (*save != '\0')
    {
        j = 0;
        while (delim[j] != '\0')
        {
            if (*save == delim[j])
            {
                save++;
                goto restart;
            }
            j++;
        }
        break;
        restart:;
    }

    if (*save == '\0')
        return NULL;

    char *token = save;

    while (*save != '\0')
    {
        j = 0;
        while (delim[j] != '\0')
        {
            if (*save == delim[j])
            {
                *save = '\0';
                save++;
                return token;
            }
            j++;
        }
        save++;
    }

    return token;
}
