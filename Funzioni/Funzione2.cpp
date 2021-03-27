/*
1 Definire una funzione che prende in input due numeri n ed m e restituisce la moltiplicazione utilizzando solo la somma (non il simbolo '*')
2 Definire una funzione che prende in input due numeri n ed m e restituisce la differenza (sottrazione)
3 Definire una funzione che prende in input due numeri n ed m e restituisce la moltiplicazione per 2
4 Definire una funzione che prende in input due numeri n ed m e restituisce la divisione per 2
Solo per la prima funzione, devi arrivare al risultato della moltiplicazione usando la somma
3 x 4 = 3 + 3 + 3 + 3
*/

#include <stdio.h>

int sottra(int, int);
int moltSomma(int, int);
int div(int, int);
int molt2(int, int);


int main()
{
	int n, m;

	printf("inserisci un numero: ");
	scanf("%d", &n);

	printf("inserisci un numero: ");
	scanf("%d", &m);

	moltSomma(n, m);
	div(n, m);
	sottra(n, m);
	molt2(n, m);

}

int moltSomma(int n1, int n2)
{
	int n3;

	for(int i = 1; i <= n2; i++)
		n3 += n1;

	printf("La moltiplicazione per %d di %d e' %d\n", n2, n1, n3);
}

int div(int n1, int n2)
{
	int i1, i2;

	for(i1 = 0; n1 >= 0; i1++)
		n1 -= 2;

	for(i2 = 0; n2 >= 0; i2++)
		n2 -= 2;

	printf("La divisione per 2 di n e' %d\n", i1);
	printf("La divisione per 2 di m e' %d\n", i2);
}

int molt2(int n1, int n2)
{
	n1 *= 2;
	n2 *= 2;

	printf("La moltiplicazione per 2 di m e' %d\n", n1);
	printf("La moltiplicazione per 2 di n e' %d\n", n2);
}

int sottra(int n1, int n2)
{
	int n3;
	n3 = n1 - n2;

	printf("La sottrazione dei 2 numeri e' %d\n", n3);
}
