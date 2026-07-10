// ~/cecko/3/prohod2.c

#include <stdio.h>

int main(void)
{
    int a = 0; // do a si priradime na zacatku 0
    printf("Puvodni %d\n", a);

    if (a == 0) // pokud je a 0, dame do nej jednicku
        a = 1;
    else // pokud je a 1, dame do nej nulu
        a = 0;

    printf("Prohozene %d\n", a);

    return 0;
}