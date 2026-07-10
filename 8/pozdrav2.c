// ~/cecko/8/pozdrav2.c

#include <stdio.h>

void pozdrav(char jmeno[])
{
    printf("Ahoj, vrele te tu vitam %s!\n", jmeno);
}

int main(void)
{
    pozdrav("Karle"); // volani funkce

    return 0;
}