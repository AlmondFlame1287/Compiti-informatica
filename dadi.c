
/* Scrivi un programma che effettua random il lancio di due dadi e
visualizza i risultati. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int dado1, dado2;

  dado1 = rand()%6 + 1;
  dado2 = rand()%6 + 1;

  printf("Il primo dado ha come valore %d, mentre il secondo %d", dado1, dado2);
}
