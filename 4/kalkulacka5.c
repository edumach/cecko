// ~/cecko/4/kalkulacka5.c

#include <stdio.h>
int main(void) 
{
    double a;
    double b;
    int volba;
    double vysledek;
    char pokracovat; //neni potreba nastavovat (inicializovat)
    printf("Vitejte v kalkulacce \n");
    do
    {
        printf("Zadejte prvni cislo: \n");
        scanf("%lf", &a);
        printf("Zadejte druhe cislo: \n");
        scanf("%lf", &b);
        printf("Zvolte si operaci: \n");
        printf("1 - scitani \n");
        printf("2 - odcitani \n");
        printf("3 - nasobeni \n");
        printf("4 - deleni \n");
        scanf("%d", &volba);
        switch(volba)
        {
        case 1:
            vysledek = a + b;
            break;
        case 2:
            vysledek = a - b;
            break;
        case 3:
            vysledek = a * b;
            break;
        case 4:
            vysledek = a / b;
            break;
        }
        if ((volba > 0) && (volba < 5))
            printf("Vysledek: %lf\n", vysledek);
        else
            printf("Neplatna volba \n");
        printf("Prejete si zadat dalsi priklad? [1/0]");
        scanf("%d",  &pokracovat);
    } while (pokracovat == 1);
    printf("Dekuji za pouziti kalkulacky");
    return 0;
}