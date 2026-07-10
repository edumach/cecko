// ~/cecko/9/kopie.c

#include <stdio.h>

int main(void)
{
    FILE *fr, *fw;
    int c;
    
    fr = fopen("dopis.txt", "r");
    fw = fopen("kopie.txt", "w");
    
    while ((c = getc(fr)) != EOF)
        putc(c, fw);
    
    fclose(fr);
    fclose(fw);
    
    return 0;
}