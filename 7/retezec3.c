// ~/cecko/7/retezec3.c

#include <stdio.h>

int main(void) 
{
    char text[] = "duha";
    text[0] = 'h';
    text[3] = '\0';
    printf("%s", text);

    return 0;
}
