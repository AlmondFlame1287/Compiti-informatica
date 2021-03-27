//N2-congettura di goldbach == due numeri primi fanno un numero non primo
#include <stdio.h>

int goldbach(int);
int primo(int);

int main()
{
  int n1;

  printf("Inserisci un numero: ");
  scanf("%d", &n1);

  primo(n1);

}

int primo(int n1)
{
  int resto, div;

  for(int i; i < n1; i++)
  {
    resto = n1 % i;

    if(resto == 0)
      div++;
  }

  if(div == 0)
    goldbach(n1);

}

int goldbach(int n1)
{
  int x, x1 = x, x2 = x, i2;

  for(int i = 1; i <= x; i++)
  {
    x1 -= i;
  }
}
