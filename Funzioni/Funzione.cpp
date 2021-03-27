#include <stdio.h>

int nLetti();

int main()
{
	printf("Sono stati inseriti %d numeri", nLetti());
}

int nLetti()
{
	int n, conta, somma = 0;

	do
	 {

		printf("Dammi un numero: ");
		scanf("%d", &n);
		conta++;
		somma += n;

	} while(n != 0);

	printf("La somma e' %d \n", somma);

	return conta;
}
