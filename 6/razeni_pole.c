// ~/cecko/6/razeni_pole.c

#include <stdio.h>
#define POCET 8  // zde neni strednik!!!

int porovnej(const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int cisla[] = {15, 8, 3, 10, 9, 2, 1, 2};

    qsort(cisla, POCET, sizeof(int), porovnej);

    int i;
    for (i = 0; i < POCET; i++)
    {
        printf("%d ", cisla[i]);
    }
    
    return 0;
}