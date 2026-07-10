// ~/cecko/7/pozdrav.c

#include <stdio.h>

int main(void) 
{
    printf("Zadej sve jmeno: ");
    char jmeno[51];
    scanf("%50s", jmeno);
    printf("Ahoj uzivateli %s, vitam te!", jmeno);

    return 0;
}