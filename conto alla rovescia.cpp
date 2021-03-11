#include <stdio.h>

int main()
{
  int num;
  do
  {
    printf("Dammi un numero compreso tra 10 e 20: ");
    scanf("%d", &num);

    if(num < 10 || num > 20)
      printf("Ti ho detto tra 10 e 20.\n");

  } while(num < 10 || num > 20);

  for(num; num >= 0; num--)
    printf("\n%d", num);
}
