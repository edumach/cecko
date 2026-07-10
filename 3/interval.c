// ~/cecko/3/interval.c

#include <stdio.h>

int main(void)
{
    int a;

    printf("Zadej cislo v rozmezi 10-20 \n");
    scanf("%d", &a);

    if ((a >= 10) && (a <= 20))
        printf("Zadal jsi spravne \n");
    else
        printf("Zadal jsi spatne \n");
    
    return 0;
}