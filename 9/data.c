// ~/cecko/9/data.c

#include <stdio.h>

int main(void)
{
    FILE *fr;
    double x, y, z;

    fr = fopen("data.txt", "r");
    fscanf(fr, "%lf %lf %lf", &x, &y, &z);
    printf("%f\n", x + y + z);
    
    fclose(fr);
    return 0;
}
