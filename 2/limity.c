// ~/cecko/2/limity.c

#include <stdio.h>
#include <limits.h>

int main(void) {
  printf("Velikost char je %d B \n", sizeof(char));
  printf("Velikost short int je %d B \n", sizeof(short int));
  printf("Velikost int je %d B \n", sizeof(int));
  printf("Velikost float je %d B \n", sizeof(float));  
  printf("Velikost double je %d B \n", sizeof(double));
  	
  return 0;
}