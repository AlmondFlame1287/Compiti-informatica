#include <stdio.h>


int main()
{
	const float prezzo = 10;
	const int sconto = 50;
	int eta;
	
	printf("Quanti anni hai? ");
	scanf("%d", &eta);
	
	if(eta >= 10 && eta <= 80)
	{
		printf("Devi pagare %.1f euro", prezzo);
	}
	else if(eta < 5)
	{
		printf("Entri gratis");
	}
	else if(eta <= 9)
	{
		float prezzoScon;
		prezzoScon = (prezzo / 100) * sconto;
		if(prezzoScon < 8)
		{
			printf("Devi pagare %.1f euro (applicato il %d %% di sconto)", prezzoScon, sconto);
		}
		else
		{
			printf("Devi pagare %d euro", prezzoScon);
		}
	}
	
}
