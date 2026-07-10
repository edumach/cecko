// ~/cecko/7/pozdrav2.c

#include <stdio.h>

int main(void) 
{
    printf("Zadej sve jmeno: ");
    char jmeno[51];
    scanf(" %50[^\n]s", jmeno); // upraveny radek
    printf("Ahoj uzivateli %s, vitam te!", jmeno);

    return 0;
}


