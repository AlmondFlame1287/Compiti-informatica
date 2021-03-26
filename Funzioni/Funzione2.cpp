#include <stdio.h>

int molt2(int, int);
int div2(int, int);
int somma(int, int);
int sottra(int, int);

int main()
{
	char scelta;
	int a, b;
	
	printf("Dammi 2 numeri: ");
	scanf("%d%d", &a, &b);
	
	do {
		printf("\nChe cosa vuoi fare tra 2 numeri?: \n");
		printf(" *   Moltiplicazione \n");
		printf(" /  Divisione \n");
		printf(" +   Somma \n");
		printf(" -   Sottrazione \n \n \n");
	
		printf("La tua scelta e'  :   ");
		scanf("%c", &scelta);
		
		if(scelta != '*' && scelta != '/' && scelta != '+' && scelta != '-')
			printf("Mi pare di averti dato delle opzioni.. Perche' non le segui?? \n\n");
			
		fflush(stdin);	
		
	} while(scelta != '*' && scelta != '/' && scelta != '+' && scelta != '-');
	
	switch(scelta)
	{
		case '*':
			molt2(a, b);
			break;
		
		case '/':
			div2(a, b);
			break;
		
		case '+':
			somma(a, b);
			break;
		
		case '-':
			sottra(a, b);
			break;			
	}
}

int molt2(int n1, int n2)
{
	
}
