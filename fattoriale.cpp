#include <stdio.h>

int main()
{
	int num = 0, num1, fattoriale;
	
	do
	{
		printf("Dammi un numero (inserisci 0 per terminare i numeri da inserire): ");
		scanf("%d", &num);
		
		num1 = num;
		
		if(num == 0)
			printf("1");
		
		else
		{
			for(int i = 0; i <= num1; i++)
			{				
				fattoriale *= num * (num - 1);
				num--;	
			}
			printf("Il fattoriale del numero inserito e': %d\n", fattoriale);
		}
	
		
	} while(num != 0);
}
