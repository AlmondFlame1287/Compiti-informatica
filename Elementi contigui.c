/*
Scrivere un programma C che,
ricevendo in ingresso una sequenza di lunghezza arbitraria di numeri interi diversi da zero,
terminata da uno zero,
produca in uscita la sequenza di tre elementi contigui la cui somma e` massima
(se sono presenti piu` sequenze con somma massima,
e` sufficiente stampare la prima).
*/

int main()
{
	int num = 0, somma1 = 0, somma2 = 0;

	do
	{
		printf("Dammi un numero: ");
		scanf("%d", &num);

		if(num > somma1)
			somma1 += num;
		else
			somma2 += num;


	} while(num > 0);

	if(somma1 > somma2)
		printf(" %d ", somma1);
	else
		printf(" %d ", somma2);

}
