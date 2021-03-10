#include <stdio.h>

int main()
{
  int num, exp, pot;

  printf("Dammi un numero e un esponente: ");
  scanf("%d%d", &num, &exp);

	for(int i; i < exp; i++)
    {
      if(i == 1)
        pot = num;

      pot *= num;
    }

    printf("Il risultato della potenza e': %d", pot);
  
}
