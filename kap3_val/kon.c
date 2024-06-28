#include <stdio.h>
int main() {
	long long int personnummer;
	short int siffra, nast_sista;
	printf("Är du kille (0) eller tjej (1)?");
	scanf("%d", &siffra);
	printf("Ditt personnummer: ");
	scanf("%lld", &personnummer);		
	nast_sista = personnummer / 10;
	if ((nast_sista % 2 == 0 && siffra == 1) || (nast_sista % 2 != 0 && siffra == 0))
		printf("Stämmer.");
	else
		printf("Stämmer inte.");

	return 0;
}