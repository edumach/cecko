// ~/cecko/8/obdelnik.c

#include <stdio.h>

int obsah_obdelniku(int sirka, int vyska)
{
    int vysledek = sirka * vyska;
    return vysledek;
}

int main(void)
{
    printf("Obsah obdelniku je: %d cm2", obsah_obdelniku(10, 20));

    return 0;
}