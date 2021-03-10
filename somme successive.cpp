#include <stdio.h>

int main()
{
  int num1, num2, num3;

  do
  {
    printf("Dammi due numeri maggiori di 0: ");
    scanf("%d%d", &num1, &num2);
    
    num3 = num1;

    if(num1 <= 0 || num2 <= 0)
      printf("Ti ho detto maggiori di 0. ");

  }while(num1 <= 0 || num2 <= 0);

  for(int i = 1; i < num2; i++)
  {
    num1 += num3;
  }

  printf("Il prodotto e' %d", num1);
}
