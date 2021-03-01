#include <stdio.h>

#define FASCIA1 10000
#define FASCIA2 20000
#define FASCIA3 35000
#define FASCIA4 60000
#define FASCIA5 100000
#define ALI1 12
#define ALI2 18
#define ALI3 27
#define ALI4 48
#define ALI5 60

int main()
{
  int reddito = 0, redditoImp;

  printf("Quant'e' il tuo reddito annuo?: ");
  scanf("%d", &reddito);

  if(reddito <= FASCIA1)
  {
    redditoImp += reddito;
  }
  else if(reddito <= FASCIA2)
  {
    redditoImp += (FASCIA2 - reddito)
  }
  else if(reddito <= FASCIA3)
  {
    redditoImp += (FASCIA3 - reddito)
  }
  else if(reddito <= FASCIA4)
  {
    redditoImp += (FASCIA4 - reddito)
  }
  else if(reddito <= FASCIA5)
  {
    redditoImp += (FASCIA5 - reddito)
  }
}
