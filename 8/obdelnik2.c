// ~/cecko/8/obdelnik2.c

#include <stdio.h>

int obsah_obdelniku(int sirka, int vyska)
{
    int vysledek = sirka * vyska;
    return vysledek;
}

int main(void)
{
    int obsah = obsah_obdelniku(10, 20);
    printf("Obsah obdelniku je: %d cm2", obsah);

    return 0;
}