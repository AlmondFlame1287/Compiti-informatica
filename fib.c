/*
Scrivere un programma che, ricevuto in ingresso un intero N >= 0, calcoli l’N
simo elemento della sequenza F dei numeri di Fibonacci, definita così:
F(0) = 0
F(1) = 1

F(K) = F(K-1)+F(K-2) per K≥2
In altre parole, la sequenza dei numeri di Fibonacci è la seguente: 0,1,1,2,3,5,8,13,...
in cui ciascun numero, dal terzo in poi, è la somma dei due che lo precedono.
*/

#include <stdio.h>


int main() 
{
    int i, N, primo = 1, secondo = 1, terzo;

    do 
	{
        printf("Quanti numeri vuoi inserire?: ");
        scanf("%d", &N);
    } 
	while (N < 3);

    printf("0\n");
    printf("1\n");

    for (i = 2; i < N; i++) 
	{
        terzo = primo + secondo;
        primo = secondo;
        secondo = terzo;
        printf("%d\n", terzo);
    }

    return 0;
}
