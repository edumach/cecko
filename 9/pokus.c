// ~/cecko/9/pokus.c

#include <stdio.h>

int main(void)
{
    FILE *fw;
    int i;
    fw = fopen("pokus.txt", "w");
    
    for (i = 1; i <= 10; i++)
        fprintf (fw, "%d\n", i);
    
    fclose(fw);
    return 0;
}
