// ~/cecko/10/soucet.c

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Kontrola: program + 2 argumenty = argc musi byt 3
    if (argc != 3) {
        printf("Pouziti: %s <cislo1> <cislo2>\n", argv[0]);
        return 1;
    }

    char *konec1, *konec2;
    
    // Prevody s kontrolou
    int cislo1 = strtol(argv[1], &konec1, 10);
    int cislo2 = strtol(argv[2], &konec2, 10);

    // Pokud *konec ukazuje na zacatek retezce, prevod nebyl uspesny
    if (*konec1 != '\0' || *konec2 != '\0') {
        printf("Chyba: Jeden z argumentu neni platne cele cislo.\n");
        return 1;
    }

    printf("Soucet: %d\n", cislo1 + cislo2);

    return 0;
}