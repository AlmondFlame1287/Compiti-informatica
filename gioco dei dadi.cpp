/*
Si consideri il seguente ipotetico gioco d'azzardo ai dadi cui partecipa un solo giocatore.
All'inizio del gioco, il giocatore ha a disposizione 1000 euro.
Il giocatore immette una puntata (che non può essere superiore al saldo disponibile) e tira due dadi:
se il punteggio supera 6 il giocatore vince la puntata (essa viene quindi sommata al saldo disponibile
del giocatore) se invece il punteggio va da 1 a 6 il giocatore perde la puntata (essa viene quindi
sottratta al saldo disponibile del giocatore). Il gioco finisce quando il giocatore si ritira oppure
quando il saldo arriva a zero. Il giocatore può ritirarsi solo se ha puntato (anche in più giocate)
almeno 300 euro.

Il programma deve simulare il gioco descritto. In particolare
Ad ogni iterazione, il programma deve chiedere al giocatore di immettere una puntata e acquisirla,
ripetendo l'acquisizione se la puntata supera strettamente il saldo disponibile

Il programma chiede quindi il punteggio ottenuto dal lancio dei dadi, ripetendo l'acquisizione se il
numero non _e compreso tra 2 e 12: dopo ogni lancio dei dadi, il programma deve avvisare il giocatore
del fatto di aver vinto o perso, quindi deve stampare il nuovo saldo disponibile.

Il programma, prima di cominciare una nuova iterazione, deve chiedere al giocatore se desidera
continuare, ma solo se il giocatore ha puntato almeno 300 euro.

Il programma termina se il saldo arriva a 0.
*/

//puntata non può essere superiore a 1000
//punteggio vincente > 6
//punteggio perdente 1 a 6
//saldo per ritirarsi >= 300
//richiedere il punteggio se non è da 2 a 12

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//dichiarazione funzioni
void continua();


//dichiarazione variabili globali
int saldo = 1000, puntata, dado1, dado2, sdado, probVittoria, probSconfitta, c = 1; 


int main()
{
	while (saldo > 0 && c != 0)
	{
		printf("Il saldo disponibile e' %d. Quant'e' la tua puntata?\n", saldo);
		scanf("%d", &puntata);

		do
		{
			if(saldo > 0)
			{
				if (puntata <= saldo)
				{
					//se la puntata è grossa allora più possibilità di vittoria
					if (puntata > 600)
					{
						probVittoria = rand() % 100 + 25;
						probSconfitta = rand() % 100 + 1;
						probVittoria -= probSconfitta;
					}
					else if(puntata >= 300 && puntata <= 599)
					{
						probVittoria = rand() % 100 + 1;
						probSconfitta = rand() % 100 + 25;
						probVittoria -= probSconfitta;
					}
					else
					{
						probVittoria = rand() % 100 + 1;
						probSconfitta = rand() % 100 + 50;
						probVittoria -= probSconfitta;
					}
	
					//sistema casuale dei dadi
					if (probVittoria > 95)
					{
						dado1 = rand() % 6 + 2;
						dado2 = rand() % 6 + 2;
					}
					else
					{
						dado1 = rand() % 6 + 1;
						dado2 = rand() % 6 + 1;
					}
					sdado = dado1 + dado2;
	
	
					if (sdado > 6)
					{
						saldo = saldo + puntata;
						printf("Hai fatto %d. Hai vinto %d. Il saldo disponibile e' ora %d. Vuoi continuare? (1  = continua/ 0 = termina)\n", sdado, puntata, saldo);
						scanf("%d", &c);
					}
					else
					{
						saldo -= puntata;
						printf("Hai fatto %d. Hai perso %d. Il saldo disponibile e' ora %d. Vuoi continuare? (1 = continua/ 0 = termina)\n", sdado, puntata, saldo);
						scanf("%d", &c);
					}
		
					if (c == 1)
					{
						main();
					}
					else
					{
						printf("E' finita per te..");
					}
				}
				else
				{
					printf("Guarda che non puoi puntare piu' di quello che hai -.-\n");
					printf("Il saldo disponibile e' %d. Quant'e' la tua puntata?\n", saldo);
					scanf("%d", &puntata);
				}
			} 
			else
			{
				do
				{
					printf("E' finita per te.. premi 0 per uscire.");
					scanf("%d", &c);
					
					if(c != 0)
					{
						printf("E' finita per te.. premi 0 per uscire.");
						scanf("%d", &c);
					}
				} while(c != 0);
					
			}
		} while (puntata >= saldo && c != 0);
	}
}

