#include <stdio.h>

int nLetti();

int main()
{
	printf("Sono stati inseriti %d numeri", nLetti());
}

int nLetti()
{
	int n, conta;
	
	do {
		printf("Dammi un numero: ");
		scanf("%d", &n);
		conta++;
	} while(n != 0);
	
	return conta;
}
