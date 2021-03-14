//Gioco
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FICHES 1300

short int nGiocatori = 1;

void inizioPartita(int soldi[8]);

int main()
{
	
	do {
		printf("Quanti giocatori ci sono? (max 8): \n");
		scanf("%d", &nGiocatori);
		
		if(nGiocatori > 8)
			printf("Guarda che ti ho detto che il massimo dei giocatori sono 8\n");
		
		else if(nGiocatori <= 0)
			printf("Come pensi di giocare con meno di un giocatore?!\n");
			
	} while(nGiocatori > 8 || nGiocatori <= 0);
	
	int fiches[8];
	
	for(int i = 1; i <= nGiocatori; i++) { //da a tutti i giocatori lo stesso numero di fiches.
		
		fiches[i] = FICHES;
	}
	
	inizioPartita(fiches[8]);
	
}

void inizioPartita(int soldi[8])
{
	int puntata;
	
		for(int i = 1; i <= nGiocatori; i++) {
			
			do {
				
				printf("Giocatore %d, quante fiches vuoi giocare?: ", i);
				scanf("%d", &puntata);
				
				if(soldi[i] < puntata) 
					printf("Non puoi puntare piu' di cio' che hai");
				
				else
					soldi[i] -= puntata;
			} while(soldi[i] > 0);
		
		} 
	
}
