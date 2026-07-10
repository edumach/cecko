// ~/cecko/10/soucet_vsech.c

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Program potrebuje alespon 2 argumenty (napr. ./soucet_vsech 5 10)
    // argc musi byt minimalne 3 (soucet_vsech + cislo1 + cislo2)
    if (argc < 3) {
        printf("Chyba: Zadejte alespon dve cisla.\n");
        printf("Pouziti: %s <cislo1> <cislo2> [dalsi_cisla...]\n", argv[0]);
        return 1;
    }

    int soucet = 0;
    char *konec;

    // Prochazime pole od indexu 1 (prvni argument) az po posledni (argc - 1)
    for (int i = 1; i < argc; i++) {
        int cislo = strtol(argv[i], &konec, 10);

        // Kontrola, zda byl prevod uspesny
        if (*konec != '\0') {
            printf("Chyba: Argument '%s' neni platne cele cislo.\n", argv[i]);
            return 1;
        }

        soucet += cislo;
    }

    printf("Celkovy soucet: %d\n", soucet);

    return 0;
}