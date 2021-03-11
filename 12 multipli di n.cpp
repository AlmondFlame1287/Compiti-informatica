#include <stdio.h>

int main()
{
  int n;

  printf("Dammi un numero: ");
  scanf("%d", &n);

  for(int i = 1; i <= 12; i++)
    printf("%d\n", n*i);

}
