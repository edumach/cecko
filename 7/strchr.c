// ~/cecko/7/strchr.c

#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[] = "Pan X znovu uderil.";
    char *p = strchr(text, 'X'); // Zjistime pozici znaku 'X' v textu
    int pozice = p - text;
    if (p != NULL)
        printf("Nalezeno na pozici %d", pozice);
    else
        printf("Nenalezeno");

    return 0;
}
