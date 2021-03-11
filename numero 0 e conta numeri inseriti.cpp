/*
Scrivi un programma che legge una sequenza
di numeri interi terminanti con uno 0
e visualizza quanti numeri sono stati inseriti. */

#include <stdio.h>

int main()
{
  int conta, numeri;

  do
    {
      printf("Inserisci una sequenza di numeri: ");
      scanf("%d", &numeri);
      conta++;
    } while(numeri != 0);

  printf("hai inserito %d numeri", conta - 1);
}
