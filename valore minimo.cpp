#include <stdio.h>

int main()
{
  int nNum, num, min;

  printf("Quanti numeri vuoi controllare?: ");
  scanf("%d", &nNum);

  for(int i = 0; i <= nNum; i++)
  {
    printf("\nChe numero vuoi controllare?: ");
    scanf("%d", &num);

    if(i == 0)
    {
      min = num;
    }

    if(num <= min)
    {
      min = num;
    }
  }

  printf("Il numero minore e': %d", min);
}
