#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
  srand(time(NULL));
  int giorno = rand()%7 + 1;
  int belliGiorni[] = {0, 0, 0, 0, 0, 0, 0};
  int anno;
  bool giacobeo;

  while(anno < 205)
  {
    if(giorno < 8)
      giorno++;
    else
      giorno = 0;

    anno++;

    switch(giorno)
    {
      case 1:
        belliGiorni[0] += 1; //domenica
        break;

      case 2:
        belliGiorni[1] += 1; //lunedÃ¬
        break;

      case 3:
        belliGiorni[2] += 1; //martedÃ¬
        break;

      case 4:
        belliGiorni[3] += 1; //mercoledÃ¬
        break;

      case 5:
        belliGiorni[4] += 1; //giovedÃ¬
        break;

      case 6:
        belliGiorni[5] += 1; //venerdÃ¬
        break;

      case 7:
        belliGiorni[6] += 1; //sabato
        break;
    }

    for(int i = 0; i <= 6; i++)
    {
      if(belliGiorni[0] > belliGiorni[i])
      	giacobeo = true;

      else
        giacobeo = false;
    }


  }

  if(giacobeo == true)
    	printf("E' giacobeo");


	else
		printf("Non e' giacobeo");
}
