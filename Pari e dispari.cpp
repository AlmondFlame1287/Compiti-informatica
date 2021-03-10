#include <stdio.h>

int main()
{
	int n, pari, dispari;
	
	printf("Fino a che numero vuoi arrivare?: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 0)
			pari++;
		else
			dispari++;	
	}
	
	printf("Ci sono %d numeri pari e %d numeri dispari", pari, dispari);
}
