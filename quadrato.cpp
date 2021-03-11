#include <stdio.h>

int main()
{
  int num, quad, quantNum, ver;

  printf("Dammi un numero: ");
  scanf("%d", &num);

  printf("Quanti numeri vuoi usare?: ");
  scanf("%d", &quantNum);

  quad = num * num;
  num = 0;

  for(int i; i <= quantNum; i++)
  {
    printf("Devi arrivare a %d. Che numero dispari vuoi usare?: ", quad);
    scanf("%d", &num);

    do //verifica del numero dispari inserito
    {
      if(num % 2 == 0)
      {
        printf("Il numero deve essere dispari. Dammi un altro numero: \n");
        scanf("%d", &num);
      }
    } while(num % 2 == 0);

    ver += num;
  }

  if(ver == quad)
    printf("I numeri inseriti, quando sommati, arrivano al quadrato del numero inserito");
    
  else
    printf("I numer inseriti non arrivano al quadrato del primo numero inserito.");
}
