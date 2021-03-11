#include <stdio.h>

int main()
{
  int somma;
  for(int i = 10; i <= 100; i += 5)
    somma += i;

  printf("la somma e' %d", somma);
}
