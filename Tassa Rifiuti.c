#include <stdio.h>

int main()
{
	int metriQuadri;
	float importoDaPagare, x, y, p;
	
	printf("Da quanti metri quadri e' formata casa tua?: ");
	scanf("%d", &metriQuadri);
	printf("Qual e' il valore al metro nel tuo comune?: ");
	scanf("%f", &x);
	printf("Qual e' l' importo fisso nel tuo comune?: ");
	scanf("%f", &y);
	printf("Qual e' il valore addizionale nel tuo comune? (in percentuale): ");
	scanf("%f", &p);
	
	importoDaPagare = (metriQuadri * x) + y + ((p / 100) * (metriQuadri * x));
	
	printf("L'importo da pagare e': %f", importoDaPagare);
}

