//Gioco
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int inizio(int giocatori, int soldi);

int main() {
	
	int nGiocatori;
	int fiches = 1300;
	
	do {
	
		printf("Quanti giocatori ci saranno?: ");
		scanf("%d", &nGiocatori);
		
		if(nGiocatori <= 0 || nGiocatori == 1)
			printf("Non puoi giocare con questo numero di giocatori.");
			
	} while(nGiocatori <= 0 || nGiocatori == 1);
	
	inizio(nGiocatori, fiches);
}

int inizio(int giocatori, int soldi) {
	
	
	
}
