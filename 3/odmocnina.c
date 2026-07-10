// ~/cecko/3/odmocnina.c
// kompilace: gcc odmocnina.c -o odmocnina -lm

#include <stdio.h>
#include <math.h> // obsahuje funkci pro odmocninu

int main()
{
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
  
  printf("Dekuji za zadani. \n");

  return 0;
}
