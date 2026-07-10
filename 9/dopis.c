// ~/cecko/9/dopis.c

#include <stdio.h>

int main(void)
{
    int c;
    FILE *fr;

    fr = fopen("dopis.txt", "r");
    while ((c = getc(fr)) != '\n')
        putchar(c);
    
    putchar(c);  // vypis '\n' - odradkovani

    fclose(fr);
    return 0;
}