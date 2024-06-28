#include <stdio.h>

int main()
{
	int dagar, dagspris, resultat;
	printf("Antal dagar? ");
	scanf("%d", &dagar);
	printf("Pris per dag? ");
	scanf("%d", &dagspris);
	resultat = dagar * dagspris;
	printf("Totalt pris: %d\n", resultat); // Kan skriva uttrycket dagar*dagspris istf variabeln resultat

	return 0;
}