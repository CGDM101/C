#include <stdio.h>

#include <ctype.h>

int main(){
	
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