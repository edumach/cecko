// ~/cecko/4/nasobilka2.c

#include <stdio.h>

int main(void)
{
    int j;
    int i;
    printf("Mala nasobilka pomoci dvou cyklu: \n");
    for (j = 1; j <= 10; j++)
    {
        for (i = 1; i <= 10; i++)
            printf("%d ", i * j);
        printf("\n");
    }

    return 0;
}