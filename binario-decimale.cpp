/*
Si scriva un programma in linguaggio C che converta un numero binario in un numero decimale.
Il numero binario è rappresentato su N bit, e il valore di N è inserito da tastiera.
L'utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit
meno significativo. Il programma visualizzerà il numero decimale corrispondete.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int numBin[8];
	int x = 0;
	int prima, seconda, terza, quarta, quinta, sesta, settima, ottava, tot;
	
	for(int i = 8; i != 0; i--)
	{
		cout << "Inserisci una cifra binaria (partendo dala cifra meno significativa) binario: " << endl;
		cin >> numBin[x];
		x = x + 1;
	}
	
	prima = numBin[1];
	
	seconda = numBin[2];
	seconda *= pow(2,1);
	
	terza = numBin[3];
	terza *= pow(2,2);
	 
	quarta = numBin[4];
	quarta *= pow(2,3);
	
	quinta = numBin[5];
	quinta *= pow(2,4);
	
	sesta = numBin[6];
	sesta *= pow(2,5);
	
	settima = numBin[7];
	settima *= pow(2,6);
	
	ottava = numBin[8];
	ottava *= pow(2,7); 
	
	tot = prima  + seconda + terza + quarta + quinta + sesta + settima + ottava;
	
	cout << "Il risultato e' " << tot;
}
