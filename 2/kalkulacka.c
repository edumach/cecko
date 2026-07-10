// ~/cecko/2/kalkulacka.c

#include <stdio.h>

int main(void)
{
  float a;
  float b;
  float soucet;
  float rozdil;
  float soucin;
  float podil;

  printf("Vitejte v kalkulacce \n");
  printf("Zadejte prvni cislo: \n");
  scanf("%f", &a);
  printf("Zadejte druhe cislo: \n");
  scanf("%f", &b);
  soucet = a + b;
  rozdil = a - b;
  soucin = a * b;
  podil = a / b;
  printf("Soucet: %f \n", soucet);
  printf("Rozdil: %f \n", rozdil);
  printf("Soucin: %f \n", soucin);
  printf("Podil: %f \n", podil);
  
  return 0;
}