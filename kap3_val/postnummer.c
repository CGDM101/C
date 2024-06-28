#include <stdio.h>
int main() {
	long int postnummer;
	long int tvaforsta;
	printf("Skriv in ett postnummer: ");
	scanf("%ld", &postnummer);
	tvaforsta = postnummer / 1000;	
	if (tvaforsta >= 20 && tvaforsta <= 62 || tvaforsta == 65 || tvaforsta == 66)
		printf("Distriktet ligger i Götaland.");
	else if (tvaforsta >= 80)
		printf("Distriktet ligger i Norrland.");
	else
		printf("Distriktet ligger i Svealand."); 
	

	return 0;
}