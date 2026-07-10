// ~/cecko/7/znaky.c

#include <stdio.h>
#include <string.h>

int obsahuje_znak(char znak, char pole[])
{
    int i;
    for (i = 0; pole[i] != '\0'; i++)
    if (pole[i] == znak)
        return 1; // okamzite vyskoci z funkce
    return 0;
}

int main(void)
{

    // inicializace pocitadel
    int pocet_samohlasek = 0;
    int pocet_souhlasek = 0;
    int pocet_cisel = 0;

    // retezec, ktery chceme analyzovat
    char retezec[] = "Mount Everest";

    // definice typu znaku
    char samohlasky[] = "aeiouyAEUOUY";
    char souhlasky[] = "bcdfghijklmnpqrstvwxzBCDFGHIJKLMNPQRSTVWXZ";
    char cisla[] = "0123456789";

    // indexy
    int i;

    printf("Puvodni zprava: %s\n", retezec);

    // hlavni cyklus pokracuje, dokud nenarazi na znak konce retezce
    for (i = 0; retezec[i] != '\0'; i++)
    {
        if (obsahuje_znak(retezec[i], samohlasky) == 1)
            pocet_samohlasek++;
        else if (obsahuje_znak(retezec[i], souhlasky) == 1)
            pocet_souhlasek++;
        else if (obsahuje_znak(retezec[i], cisla) == 1)
            pocet_cisel++;
    }
    printf("Pocet samohlasek: %d\n", pocet_samohlasek);
    printf("Pocet souhlasek: %d\n", pocet_souhlasek);
    printf("Pocet cisel: %d\n", pocet_cisel);
    printf("Pocet zbylych znaku: %d\n",
    strlen(retezec) - pocet_samohlasek - pocet_souhlasek - pocet_cisel);
    
    return 0;
}
