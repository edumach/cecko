// ~/cecko/9/kopie2.c

#include <stdio.h>

int main(void)
{
    FILE *fr, *fw;
    int c;
    
    if ( (fr = fopen("dopis.txt", "r") ) == NULL)
    {
        printf("Soubor dopis.txt se nepodarilo otevrit\n");
        return 1; // ukonceni programu s chybou 1
    }
    
    if ( (fw = fopen("kopie2.txt", "w") ) == NULL) 
    {
        printf("Soubor kopie2.txt se nepodarilo otevrit\n");
        return 1; 
    }

    while ( (c = getc(fr) ) != EOF)
        putc(c, fw);
    
    if (fclose(fr) == EOF) 
    {
        printf("Soubor dopis.txt se nepodarilo uzavrit\n");
        return 1; 
    }

    if (fclose(fw) == EOF)
    {
        printf("Soubor kopie2.txt se nepodarilo uzavrit\n");
        return 1; 
    }

    return 0;
}