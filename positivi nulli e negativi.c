/*
Scrivi un programma che legge da
tastiera una sequenza di numeri interi
terminante con un numero negativo
e al termine stampa a video il numero dei
numeri letti che sono maggiori di zero,
di quelli che sono minori di zero e di quelli nulli.
*/

#include <stdio.h>

int main()
{
  short int n = 0, nPos = 0, nNul = 0, nNeg = 0;

  do
  {
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if(n > 0)
      nPos++;

    else if(n == 0)
      nNul++;

  } while(n >= 0);

  printf("Ci sono %d numeri positivi, %d nulli e 1 numero negativo", nPos, nNul);
}
