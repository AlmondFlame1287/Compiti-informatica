#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(NULL)); //inizializzazione numeri casuali
	int n, cont = 0;
	
	while(cont < 10)
	{			
		n = rand()%300 + 1; //numero casuale tra 1 e 2
		cont = cont + 1;
		printf("%d", n);
	}
		
	
}
