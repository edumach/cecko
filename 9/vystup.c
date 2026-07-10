// ~/cecko/9/vystup.c

#include <stdio.h>

int main()
{
  FILE *fw;
  int c;

  printf("Stisknete O pro vypis na Obrazovku\n");
  printf("nebo jiny znak pro zapis do souboru vystup.txt: ");

  c = getchar();
  // vyprazdneni bufferu - preskoci zbytek radku
  while (getchar() != '\n')
    ;

  if (c == 'o'  ||  c == 'O')
    fw = stdout;
  else {
    if ((fw = fopen("VYSTUP.TXT", "r")) != NULL) {
      printf("Soubor VYSTUP.TXT existuje, prepsat? [A/N]: ");
      c = getchar();
      while (getchar() != '\n')
        ;
      if (fclose(fw) == EOF) {
        printf("Chyba pri uzavirani souboru\n");
        return 1;
      }

      if ( !(c == 'a'  ||  c == 'A') )
        return 0;    // konec programu - nechce prepsat soubor
    }

    if ((fw = fopen("vystup.txt", "w")) == NULL) {
      printf("Soubor vystup.txt se nepodarilo otevrit\n");
      return 1;
    }
  }

  printf("Piste text a ukoncete jej znakem *\n");
  while ((c = getchar()) != '*')
    putc(c, fw);

  if (fw != stdout) {
    if (fclose(fw) == EOF) {
      printf("Soubor vystup.txt se nepodarilo uzavrit\n");
      return 1;
    }
  }
  return 0;
}

