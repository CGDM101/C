#include <stdio.h>
#include <ctype.h>

#include <locale.h>
#include <stdlib.h> // system

int main(){

	system("chcp 1252");
	setlocale(LC_ALL, "");

	printf("Skriv ett tecken: ");
	char teck;
	scanf("%c", &teck);
	printf("Du skrev tecknet: %c\n", teck); 

	if (isdigit(teck))
		printf("Det är en siffra.");
	if (islower(teck)) {
		printf("Det är en gemen.");
		printf(" Motsvarande versal är: %c ", toupper(teck));
	}

	
	return 0;
}

// Funktionerna i ctype fungerar normalt bara för ASCII-koder. Med setlocale kan funktionerna känna igen även svenska bokstäver.
// Programmet hämtar då information om olika tecken fr operativsystemet (t ex svensk version).
// chcp 1252 måste med.