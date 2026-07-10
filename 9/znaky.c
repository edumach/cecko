// ~/cecko/9/znaky.c

#include <stdio.h>

int main(void)
{
    FILE *fr, *fw;
    int c;  // opravdu "int" a ne "char"

    fr = fopen("znaky.txt", "r");
    fw = fopen("kopie.txt", "w");

    c = getc(fr);       // cteni prvniho znaku
    putc(c, fw);        // zapis prvniho znaku

    putc(getc(fr), fw); // cteni a zapis druheho znaku
    
    fclose(fr);
    fclose(fw);

    return 0;
}
