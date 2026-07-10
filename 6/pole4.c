// ~/cecko/6/pole4.c

#include <stdio.h>
#define POCET 10

int main(void) 
{
    // Vytvoreni pole
    int pole[POCET];

    // Naplneni pole
    int i;
    for (i = 0; i < POCET; i++)
    {
        pole[i] = i + 1;
    }

    // Vypis pole
    for (i = 0; i < POCET; i++)
    {
        printf("%d ", pole[i]);
    }

    return 0;
}
