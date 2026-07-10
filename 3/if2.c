// ~/cecko/3/if2.c

#include <stdio.h>

int main(void)
{	
  int a;
  
  printf("Zadej nejake cislo \n");
  scanf("%d", &a);
  if (a > 5)
  printf("Zadal jsi cislo vetsi nez 5! \n");
  printf("Dekuji za zadani \n");
	
  return 0;
}