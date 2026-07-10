// ~/cecko/3/odmocnina2.c
// kompilace: gcc odmocnina2.c -o odmocnina2 -lm

#include <stdio.h>
#include <math.h> // obsahuje funkci pro odmocninu

int main(void) {
    int a;
    double o;

    printf("Zadej nejake cislo, ze ktereho spocitam odmocninu: \n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Cislo %d je vetsi nez 0, mohu odmocnit!\n", a);
        o = sqrt(a);
        printf("Odmocnina z cisla %d je %f \n", a, o);
    }
    if (a <= 0)
        printf("Odmocnina ze zaporneho cisla neexistuje \n");

    printf("Dekuji za zadani. \n");
    
    return 0;
}
