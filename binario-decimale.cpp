/*
Si scriva un programma in linguaggio C che converta un numero binario in un numero decimale.
Il numero binario è rappresentato su N bit, e il valore di N è inserito da tastiera.
L'utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit
meno significativo. Il programma visualizzerà il numero decimale corrispondete.
*/

#include <stdio.h>
#include <math.h>


int main() 
{
	int numBin[8];
	int x = 0;
	int tot = 0;

	for(int i = 8; i != 0; i--) 
	{
		printf("Inserisci una cifra binaria (partendo dala cifra meno significativa) binario: \n");
		scanf("%d", &numBin[x]);
		x = x + 1;
	}
	
	x = 0;
	
	for(int i = 8; i!= 0; i--)
	{
		tot += numBin[x] * pow(2, x);
		x += 1;
	}
	
	printf("Il numero in decimale e' %d", tot);
}
