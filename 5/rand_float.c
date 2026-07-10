// ~/cecko/5/rand_float.c

#include <stdio.h>
#include <time.h>    /* funkce time() */
#include <stdlib.h>  /* funkce srand() */
  
int main(void)
{
  srand( time(0) );
  printf("%f\n", rand() / (float)RAND_MAX); 

  return 0;
}