/*
Scrivere un programma che, ricevuto in ingresso 
un intero strettamente maggiore di 0, 
determini se tale numero è primo.
*/

#include <stdio.h>

int main()
{
	int n, div, resto, divisori = 1;
	
	do
	{
		printf("Dammi un numero bestia:\n");
		scanf("%d", &n);
		if (n <= 0)
		{
			printf("inserire un numero maggiore di 0\n");
		}
	} 
	while (n <= 0);

	for (int div = 1; div < n; div++)
	{
		resto = n % div;
		if (resto == 0)
		{
			divisori += 1;
		}
	}

	if (divisori > 2)
	{
		printf("Il numero non e' primo");
	}
	else
	{
		printf("Il numero e' primo");
	}

}
