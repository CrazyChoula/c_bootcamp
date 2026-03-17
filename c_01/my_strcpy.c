#include <stdio.h>

char *my_strcpy(char *dest, const char *src) {
    size_t i = 0;
    // On copie chaque caractère, y compris le '\0'
    while (1) {
        dest[i] = src[i];
        if (src[i] == '\0') break;  // on arrête après avoir copié le '\0'
        i++;
    }
    return dest;
}

int main() {
    char src[] = "Hello, world!";
    char dest[50];  // s'assurer que la taille est suffisante
    my_strcpy(dest, src);
    printf("Dest: %s\n", dest);
    return 0;
}
