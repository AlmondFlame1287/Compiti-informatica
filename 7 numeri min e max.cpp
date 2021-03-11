#include <stdio.h>

int main()
{
  int num, max = num, min = num;

  for(int i = 0; i < 7; i++)
  {
    printf("Dammi un numero: ");
    scanf("%d", &num);
    fflush(stdin);

	if(i == 0)
	{
		max = num;
		min = num;
	}

    if(num >= max)
      max = num;

    else if(num <= min)
      min = num;
  }
  printf("%d min, %d max", min, max);
}
