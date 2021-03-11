#include <stdio.h>

int main()
{
  int num, tre;

  printf("A che numero vuoi arrivare? ");
  scanf("%d", &num);

  for(int i; i <= num; i++)
  {
    if(i % 3 == 0)
      tre++;
  }

  printf("Ci sono %d multipli di 3", tre);
}
