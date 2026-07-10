// ~/cecko/7/strcat.c

#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[20] = "duha";
    strcat(text, " je na nebi"); // ulozi do text "duha je na nebi"
    printf("%s", text);
    return 0;
}


