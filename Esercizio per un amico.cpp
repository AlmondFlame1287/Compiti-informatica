/*
Progettare e codificare in C++ un algoritmo che, ricevuti in ingresso n numeri
ed un parametro p, calcoli la media aritmetica degli
n numeri se p è un numero pari, la media geometrica altrimenti. */

#include <iostream>
#include <math.h>

int main()
{
  int n, p, media, num, numVecchio;

  cout << "Quanti numeri ci saranno?: ";
  cin >> n;

  cout << "Dammi un parametro: ";
  cin >> p;

//media aritmetica
  if(p % 2 == 0)
  {
    for(int i; i < n; i++)
    {
      cout << "Inserisci un numero: ";
      cin >> num;

      numVecchio = num;
      num += numVecchio;

    }
    cout << "La media aritmetica dei numeri inseriti e' " << num / n;
  }
//media geometrica
  else
  {
    for(i = 0; i < n; i++)
    {
      
    }
  }

}
