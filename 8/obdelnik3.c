// obdelnik3.c

#include <stdio.h>

int obsah_obdelniku(int sirka, int vyska)
{
    int vysledek = sirka * vyska;
    return vysledek;
}

int main(void)
{
    int celkovy_obsah = obsah_obdelniku(10, 20) + obsah_obdelniku(20, 40);
    printf("Soucet obsahu obdelniku je: %d cm2", celkovy_obsah);

    return 0;
}