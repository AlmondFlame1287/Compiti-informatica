#include <stdio.h>

int main()
{
  int num, tab;

  do
  {
    printf("Dammi un numero compreso tra 1 e 20: ");
    scanf("%d", &num);

    if(num < 1 || num > 20)
      printf("Ti ho detto tra 1 e 20. \n");
      
  } while(num < 1 || num > 20);

  for(int i; i < num; i++)
  {
    tab = num * i;
    printf("%d\n", tab);
  }

}
