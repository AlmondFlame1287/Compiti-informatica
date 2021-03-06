#include <stdio.h>

int main()
{
	int num = 0, fattoriale = 1;

	do
	{
		printf("Dammi un numero (inserisci 0 per terminare i numeri da inserire): ");
		scanf("%d", &num);

		if(num == 0)
			printf("1");

		else
		{
			for(int i; i <= num; i++)
			{
				fattoriale *= i;
			}
			printf("Il fattoriale del numero inserito e': %d \n", fattoriale);
		}


	} while(num > 0);
}
