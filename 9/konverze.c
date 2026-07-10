// ~/cecko/9/konverze.c

#include <stdio.h>

int main(void)
{
    FILE *fr;
    int c;
    nejdelsi = 0;
    pocet = 0;

    if ((fr= fopen("dopis.txt", "r")) == NULL) 
    {
        printf("Soubor dopis.txt se nepodarilo otevrit\n");
        return 1; // ukonceni programu s chybou 1
    }

    while ( (c = getc(fr) ) != EOF)
    {
        putchar(c >= 'a' && c <= 'z' ? c + 'A' - 'a' : c);
        
        if (c == '\n') 
        {
            if (nejdelsi < pocet)
                nejdelsi = pocet;
            pocet = O;
        }
        else
            pocet++;

return 0;
}