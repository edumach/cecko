// ~/cecko/7/po_znacich.c

#include <stdio.h>

int main(void)
{
    int i;
    char veta[] = "Ahoj svete!";

    for (i = 0; veta[i] != '\0'; i++)
        printf("%c ", veta[i]);
    
    return 0;
}
