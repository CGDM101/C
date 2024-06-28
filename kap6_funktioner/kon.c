#include <stdio.h>

int ar_kvinna(long long int nr) {
	nr = nr / 10;
	return nr % 2 == 0;
}


int main() {
	long long int personnummer;
	short int siffra;
	printf("Är du kille (0) eller tjej (1)?");
	scanf("%hd", &siffra);
	printf("Ditt personnummer: ");
	scanf("%lld", &personnummer);
		
	if (siffra == 1 && ar_kvinna(personnummer) || siffra == 1 && !ar_kvinna(personnummer))
		printf("Stämmer.");
	else
		printf("Stämmer inte.");


	return 0;
}