//poker per bellezza
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FICHES 1300

void inizioGioco(int monete[7], int giocatori);

//TODO: CONTINUARE A COSTRUIRE PASSO DOPO PASSO IL CODICE PER L'ESERCIZIO DEL POKER


int main() //menu
{
	int nGiocatori, soldi[7];

	do
	{

		printf("Quanti giocatori ci saranno? (max 8): ");
		scanf("%d", &nGiocatori);

		if(nGiocatori <= 0)
			printf("Come pensi di giocare con %d giocatori?", nGiocatori);

		else if(nGiocatori > 8)
			printf("Ti ho detto che il massimo e' 8..");

	} while(nGiocatori <= 0 || nGiocatori > 8);

	for(int i = 0; i < nGiocatori; i++)
	{
		soldi[i] = FICHES;
	}

	inizioGioco(soldi[7], nGiocatori); //passa a inizio gioco con i soldi di x persone

}


void inizioGioco(int monete[7], int giocatori)
{
	srand(time(NULL));



	int puntata[giocatori], x = 0; //x = contatore di giocatori

	for(int i = 0; i < giocatori; i++)
	{

		do
		{

			x++;
			printf("Quanto vuoi puntare, giocatore %d?: ", x)
			scanf("%d", &puntata[i]);

			monete[i] -= puntata[i];

		} while(x <= giocatori);

	}





}
