#include <iostream>
#include <stdlib.h> // srand, rand
#include <time.h>	// time

int main()
{
	int n, numero, cont = 0, totPari, totDispari, contaPari, contaDispari;
	do
	{ // compresa tra 10 e 20
		printf("Inserisci un numero 10 < N < 20: ");
		scanf("%d", &n);
	} while ((n < 10) || (n > 20));

	contaPari = 0;
	contaDispari = 0;
	totPari = 0;
	totDispari = 0;
	srand(time(NULL)); // inizializzo il seme

	do
	{
		numero = (rand() % 100) + 101; // numero tra 100 e 200
		printf("%d ", numero);
		cont = cont + 1;			   // incremento il contatore
		if (numero % 2 == 0)
		{
			contaPari++;
			totPari += numero;
		}
		else
		{
			contaDispari++;
			totDispari += numero;
		}

	} while (cont < n); // condizione di uscita
	printf("\ni pari sono : %d", contaPari);
	printf("\nla media e\'  : %.2f", (float)(totPari / contaPari));
	printf("\ni dispari sono : %d", contaDispari);
	printf("\nla media e\'    : %.2f", (float)(totDispari / contaDispari));

	printf("\n\n");
	return 0;
}
