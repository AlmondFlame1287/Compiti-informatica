/*
Scrivi un programma che effettua il calcolo della media dei voti della pagella,
inserendoli uno alla volta e chiedendo a ogni inserimento di un numero
se i voti da inserire sono terminati accettando come risposta S oppure N.*/

#include <stdio.h>

int main()
{
  short int voti = 0, cont = 0, votiPre; //votiPre = voto precendente
  char continua = 's';

  while(continua == 's' || continua == 'S')
  {
    printf("Che voto hai preso?: \n");
    scanf("%d", &voti);

    //fflush(stdin) pulisce lo standard inpunt, scanf lascia qualcosa nel buffer
    //che viene letto da getchar e va avanti
    fflush(stdin);
    printf("Vuoi continuare?: \n");
    continua = getchar();

    votiPre = voti;
    voti += votiPre;
    cont++;

  }
  printf("La media dei tuoi voti e' %.2f", (float)((float)voti / (float)cont));
}
