/*
Scrivi un programma che faccia la somma di NUM numeri inseriti dall'utente
*/
#include <stdio.h>

int main()
{
  int num, add;

  printf("Quanti numeri vuoi addizionare?: ");
  scanf("%d", &num);

  for(int i; i <= num; i++)
  {
    add += i;
  }
  printf("I numeri addizionati sono: %d", add);
}
