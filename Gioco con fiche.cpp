//Gioco
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int inizio(int giocatori, int soldi);

int main()
{

	ushort nGiocatori;
	int fiches = 1300;

	do
	{

		printf("Quanti giocatori ci saranno?: ");
		scanf("%hu", &nGiocatori);

		if(nGiocatori <= 0 || nGiocatori == 1)
			printf("Non puoi giocare con questo numero di giocatori. Portati degli amici. \n");

	} while(nGiocatori <= 0 || nGiocatori == 1);

	inizio(nGiocatori, fiches);
}

int inizio(ushort giocatori, int soldi)
{
	srand(time(NULL));
	int puntata = 0;

	do
	{
		for(ushort i = 1; i <= giocatori; i++)
		{
			printf("Giocatore %d, hai a disposizione %d fiches, quanto vuoi puntare?: ", i, soldi);
			scanf("%d", &puntata);

			do //controllo puntata
			{
				if(puntata > soldi)
				{
					printf("Non puoi puntare piu' di quello che hai. Prova di nuovo: ");
					scanf("%d", &puntata);
				}
				else if(puntata <= 0)
				{
					printf("Non puoi puntare 0 o meno. Prova di nuovo: ");
					scanf("%d", &puntata);
				}
			} while(puntata > soldi || puntata <= 0);

			fiches -= puntata;

		}

	} while(soldi > 0)

}
