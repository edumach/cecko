// ~/cecko/6/pole3.c

#include <stdio.h>

int main(void)
{
    int pole[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        pole[i] = i + 1;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", pole[i]);
    }
    
    return 0;
}