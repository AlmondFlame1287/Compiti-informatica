#include <stdio.h>

int main()
{
  short int num;

  printf("Quanti numeri vuoi vedere?: ");
  scanf("%d", &num);

  for(int i; i <= num; i++)
    printf(" %d", i);
}
