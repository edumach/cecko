// ~/cecko/7/caesar.c

#include <stdio.h>

int main(void)
    {
    // retezec k zasifrovani
    char s[] = "gaiusjuliuscaesar";
    int posun = 1;
    int i;

    printf("Puvodni zprava: %s\n", s);

    // hlavni cyklus
    for (i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] + posun;
    }

    printf("Zasifrovana zprava: %s\n", s);

    return 0;
}
