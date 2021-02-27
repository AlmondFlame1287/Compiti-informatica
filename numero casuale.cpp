/*
Scrivi un programma che legge un numero compreso tra 10 e 20 e genera altrettanti numeri casuali compresi tra 100 e 200.
il numero conta quanti numeri pari e dispari sono stati visualizzati,visualizzando per ciascun gruppola loro media
*/

//in c++ e non in c sempre per via del c11 o c99
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int n = 0;
  int casuale = 0, numPari, numDispari;
  float pari = 0, dispari = 0;
  
  do
  {
    printf("Inserisci un numero tra 10 e 20: ");
    scanf("%d", &n);

    if(n >= 10 && n <= 20)
    {
		srand(time(NULL));
		for(int i = 0;i < n;i++)
		{
			casuale = rand()%200 + 100;
			if(casuale >= 100 && casuale <= 200)
			{
				printf(" %d ", casuale);
				if(casuale % 2 == 0)
				{
					numPari++;
					pari += casuale;
					pari /= numPari;
				}
				else
				{
					numDispari++;
					dispari += casuale;
					dispari /= numDispari;
				}
			}
			
			else if(casuale < 100 || casuale > 200)
			{
				i--;
			}	
		}
		printf("Media dispari: %f \t", dispari);
		printf("Media pari: %f \t", pari);
    }
    else
    {
		printf("Ti ho detto un numero tra 10 e 20.. \n");		
    }
  } while(n < 10 || n > 20);
}
