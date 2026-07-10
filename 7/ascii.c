// ~/cecko/7/ascii.c

#include <stdio.h>
#include <string.h>

int main(void)
{
    char c; // znak
    int i; // ordinalni (ASCII) hodnota znaku
    // prevedeme znak na jeho ASCII hodnotu
    c = 'a';
    i = (int)c;
    printf("Znak %c jsme prevedli na ASCII hodnotu %d\n", c, i);

    // Prevedeme ASCII hodnotu na znak
    i = 98;
    c = (char)i;
    printf("ASCII hodnotu %d jsme prevedli na znak %c", c, i);
    return 0;
}
