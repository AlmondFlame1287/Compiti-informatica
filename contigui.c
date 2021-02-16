/*
Scrivere un programma C che,
ricevendo in ingresso una sequenza di lunghezza
arbitraria di numeri interi diversi da zero,
terminata da uno zero, produca in uscita la sequenza di tre elementi contigui la cui somma e` massima 
(se sono presenti piu` sequenze con somma massima, e` sufficiente stampare la prima).
*/

#include <stdio.h>

int main()      
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int j= 0;
	
	printf("Inserisci un numero (inserisci 0 per trovare la somma massima tra i numeri) \n");
	scanf("%d", &a);
	
	if(a == 0)
	{
		printf("E che cazzo, non mettere lo 0 come primo numero.\n");
	}
	
	printf("Inserisci un numero (inserisci 0 per trovare la somma massima tra i numeri) \n");
	scanf("%d", &b);
	
	if(b == 0)
	{
		printf("E che cazzo, non mettere lo 0 come secondo numero.\n");
	}
	
	printf("Inserisci un numero (inserisci 0 per trovare la somma massima tra i numeri) \n");
	scanf("%d", &c);
	
	if(c == 0)
	{
		printf("E che cazzo, non mettere lo 0 come terzo numero.\n");
	}
	
	printf("Inserisci un numero (inserisci 0 per trovare la somma massima tra i numeri) \n");
	scanf("%d", &d);
	
	if(d == 0)
	{
		printf("%d, %d, %d", a, b, c);
	}
	
	printf("Inserisci un numero (inserisci 0 per trovare la somma massima tra i numeri) \n");
	scanf("%d", &e);
	
	if(e == 0)
	{
		if(a+b+c > b+c+d && a+b+c > c+d+e && a+b+c > d+e+f && a+b+c > e+f+g && a+b+c > f+g+h && a+b+c > g+h+i)
			printf("%d, %d, %d", a, b, c);
		
		else
			printf("%d, %d, %d", b, c, d);	
	}
	
	printf("Inserisci un numero (inserisci 0 per trovare la somma massima tra i numeri) \n");
	scanf("%d", &f);
	
	if(f == 0)
	{
		if(a+b+c > b+c+d && a+b+c > c+d+e && a+b+c > d+e+f && a+b+c > e+f+g && a+b+c > f+g+h && a+b+c > g+h+i)
			printf("%d, %d, %d", a, b, c);
			
		else if(b+c+d > c+d+e && b+c+d > d+e+f && b+c+d > e+f+g && b+c+d > f+g+h && b+c+d > g+h+i)
			printf("%d, %d, %d", b, c, d);
			
		else
			printf("%d, %d, %d", c, d, e);	
	}
	
	printf("Inserisci un numero (inserisci 0 per trovare la somma massima tra i numeri) \n");
	scanf("%d", &g);
	
	if(g == 0)
	{
		if(a+b+c > b+c+d && a+b+c > c+d+e && a+b+c > d+e+f && a+b+c > e+f+g && a+b+c > f+g+h && a+b+c > g+h+i)
			printf("%d, %d, %d", a, b, c);
			
		else if(b+c+d > c+d+e && b+c+d > d+e+f && b+c+d > e+f+g && b+c+d > f+g+h && b+c+d > g+h+i)
			printf("%d, %d, %d", b, c, d);
			
		else if(c+d+e > d+e+f && c+d+e > e+f+g && c+d+e > f+g+h && c+d+e > g+h+i)
			printf("%d, %d, %d", c, d, e);
		
		else
			printf("%d, %d, %d", d, e, f);		
	}
	
	printf("Inserisci un numero (inserisci 0 per trovare la somma massima tra i numeri) \n");
	scanf("%d", &h);
	
	if(h == 0)
	{
		if(a+b+c > b+c+d && a+b+c > c+d+e && a+b+c > d+e+f && a+b+c > e+f+g && a+b+c > f+g+h && a+b+c > g+h+i)
			printf("%d, %d, %d", a, b, c);
			
		else if(b+c+d > c+d+e && b+c+d > d+e+f && b+c+d > e+f+g && b+c+d > f+g+h && b+c+d > g+h+i)
			printf("%d, %d, %d", b, c, d);
			
		else if(c+d+e > d+e+f && c+d+e > e+f+g && c+d+e > f+g+h && c+d+e > g+h+i)
			printf("%d, %d, %d", c, d, e);	
			
		else if(d+e+f > e+f+g && d+e+f > f+g+h && e+f+g > g+h+i)
			printf("%d, %d, %d", d, e, f);
		
		else
			printf("%d, %d, %d", e, f, g);	
	}
	
	printf("Inserisci un numero (inserisci 0 per trovare la somma massima tra i numeri) \n");
	scanf("%d", &i);
	
	if(i == 0)
	{
		if(a+b+c > b+c+d && a+b+c > c+d+e && a+b+c > d+e+f && a+b+c > e+f+g && a+b+c > f+g+h && a+b+c > g+h+i)
			printf("%d, %d, %d", a, b, c);
			
		else if(b+c+d > c+d+e && b+c+d > d+e+f && b+c+d > e+f+g && b+c+d > f+g+h && b+c+d > g+h+i)
			printf("%d, %d, %d", b, c, d);
			
		else if(c+d+e > d+e+f && c+d+e > e+f+g && c+d+e > f+g+h && c+d+e > g+h+i)
			printf("%d, %d, %d", c, d, e);	
			
		else if(d+e+f > e+f+g && d+e+f > f+g+h && e+f+g > g+h+i)
			printf("%d, %d, %d", d, e, f);
			
		else if(e+f+g > f+g+h && e+f+g > g+h+i)
			printf("%d, %d, %d", e, f, g);
		
		else
			printf("%d, %d, %d", f, g, h);	
	}
	
	printf("Inserisci un numero (inserisci 0 per trovare la somma massima tra i numeri) \n");
	scanf("%d", &j);

		if(a+b+c > b+c+d && a+b+c > c+d+e && a+b+c > d+e+f && a+b+c > e+f+g && a+b+c > f+g+h && a+b+c > g+h+i)
			printf("%d, %d, %d", a, b, c);
			
		else if(b+c+d > c+d+e && b+c+d > d+e+f && b+c+d > e+f+g && b+c+d > f+g+h && b+c+d > g+h+i)
			printf("%d, %d, %d", b, c, d);
			
		else if(c+d+e > d+e+f && c+d+e > e+f+g && c+d+e > f+g+h && c+d+e > g+h+i)
			printf("%d, %d, %d", c, d, e);	
			
		else if(d+e+f > e+f+g && d+e+f > f+g+h && e+f+g > g+h+i)
			printf("%d, %d, %d", d, e, f);
			
		else if(e+f+g > f+g+h && e+f+g > g+h+i)
			printf("%d, %d, %d", e, f, g);
			
		else if(f+g+h > g+h+i)
			printf("%d, %d, %d", f, g, h);
			
		else
			printf("%d, %d, %d", g, h, i);	
	
}
