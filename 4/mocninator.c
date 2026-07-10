// ~/cecko/4/mocninator.c

#include <stdio.h>

int main(void) 
{
    int i;
    int a;
    int n;
    int vysledek;

    printf("Mocninator \n");
    printf("========== \n");
    printf("Zadejte zaklad mocniny: ");
    scanf("%d", &a);
    printf("Zadejte exponent: ");
    scanf("%d", &n);

    vysledek = a;
    for (i = 0; i < (n - 1); i++)
        vysledek = vysledek * a;

    printf("Vysledek: %d\n", vysledek);
    printf("Dekuji za pouziti mocninatoru. \n");

    return 0;
}