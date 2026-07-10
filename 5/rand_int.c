// ~/cecko/5/rand_int.c

#include <stdio.h>
#include <time.h>    /* funkce time() */
#include <stdlib.h>  /* funkce srand() */
  
int main(void)
{
  srand( time(0) );
  printf("%d\n", rand() % 30 + 1); 

  return 0;
}