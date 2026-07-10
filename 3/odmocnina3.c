// ~/cecko/3/odmocnina3.c
// kompilace: gcc odmocnina3.c -o odmocnina3 -lm

#include <stdio.h>
#include <math.h> // obsahuje funkci pro odmocninu

int main(void) {
    int a;
    double o;
    printf("Zadej nejake cislo, ze ktereho spocitam odmocninu:  \n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Cislo %d je vetsi nez 0, mohu odmocnit!\n", a);
        o = sqrt(a);
        printf("Odmocnina z cisla %d je %f \n", a, o);
    }
    else
        printf("Odmocnina ze zaporneho cisla neexistuje \n");

    printf("Dekuji za zadani. \n");
    
    return 0;
}