#include <stdio.h>

int main()
{
  int lato;

  printf("Dammi il lato: ");
  scanf("%d", &lato);

  for(int y = 0; y < lato; y++)
  {
    for(int x = 0; x < lato; x++)
      printf(" * ");
    
    printf(" * \n");
  }

}
