// ~/cecko/7/znaky_file.c

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
    int celkovy_pocet_znaku = 0; // Pridano pro sledovani poctu znaku
    char text[] = "alice.txt";

    // Otevreni souboru pro cteni
    FILE *fr = fopen(text, "r");
    if (fr == NULL)
    {
        printf("Nepodarilo se otevrit soubor\n");
        return 1; // okamzite ukonci program s chybou (1)
    }

    // Definice typu znaku
    char samohlasky[] = "aeiouyAEUOUY";
    char souhlasky[] = "bcdfghijklmnpqrstvwxzBCDFGHIJKLMNPQRSTVWXZ";
    char cisla[] = "0123456789";

    int c; // Promenna pro nacteni znaku ze souboru

    printf("Analyzuji soubor %s...\n", text);

    // ZMENA: Hlavni cyklus cteni po znacich
    while ((c = fgetc(fr)) != EOF) //EOF = End of file
    {
        celkovy_pocet_znaku++; // Pocitame kazdy nacteny znak

        if (obsahuje_znak(c, samohlasky) == 1)
            pocet_samohlasek++;
        else if (obsahuje_znak(c, souhlasky) == 1)
            pocet_souhlasek++;
        else if (obsahuje_znak(c, cisla) == 1)
        pocet_cisel++;
    }

    fclose(fr); // ZMENA: Uzavreni souboru

    printf("Pocet samohlasek: %d\n", pocet_samohlasek);
    printf("Pocet souhlasek: %d\n", pocet_souhlasek);
    printf("Pocet cisel: %d\n", pocet_cisel);
    
    // Vypocet zbylych znaku pomoci celkoveho poctu
    printf("Pocet zbylych znaku: %d\n",
    celkovy_pocet_znaku - pocet_samohlasek - pocet_souhlasek - pocet_cisel);
    
    return 0;
}