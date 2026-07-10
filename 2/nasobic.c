// ~/cecko/2/nasibic.c

#include <stdio.h>

int main(void)
{
  int a;
  
  printf("Zadejte cislo k zdvojnasobeni: ");
  scanf("%d", &a);
  a = a * 2;
  printf("%d\n", a);

  return 0;
}