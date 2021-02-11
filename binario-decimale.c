/*
Si scriva un programma in linguaggio C che converta un numero binario in un numero decimale.
Il numero binario è rappresentato su N bit, e il valore di N è inserito da tastiera.
L'utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit
meno significativo. Il programma visualizzerà il numero decimale corrispondete.
*/

#include <stdio.h>
#include <math.h>
using namespace std;

int main() 
{
	int numBin[8];
	int x = 0;
	int prima, seconda, terza, quarta, quinta, sesta, settima, ottava, tot;

	for(int i = 8; i != 0; i--) 
	{
		printf("Inserisci una cifra binaria (partendo dala cifra meno significativa) binario: \n");
		scanf("%d", &numBin[x]);
		x = x + 1;
	}

	prima = numBin[0];

	seconda = numBin[1];
	seconda *= pow(2,1);

	terza = numBin[2];
	terza *= pow(2,2);

	quarta = numBin[3];
	quarta *= pow(2,3);

	quinta = numBin[4];
	quinta *= pow(2,4);

	sesta = numBin[5];
	sesta *= pow(2,5);

	settima = numBin[6];
	settima *= pow(2,6);

	ottava = numBin[7];
	ottava *= pow(2,7);

	tot = prima  + seconda + terza + quarta + quinta + sesta + settima + ottava;

	printf("Il numero in decimale e' %d", tot);
}
