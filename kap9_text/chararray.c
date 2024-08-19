#include <stdio.h>
int main(){
	printf("Vad heter du? ");
	char namn[10];
	scanf("%s", namn);	// Obs ingen &. När man ger ett fält som argument i ett funktionsanrop får funktionen alltid en pekare (referens) till fältet, inte en kopia av fältet.
	printf("Hej %s", namn);

	return 0;
}

// Inläsning avslutas när scanf stöter på ett vitt tecken (mellanslag, tabulator eller radslut). scanf placerar då automatiskt ett nolltecken i variabeln namn.
// printf använder sig av nolltecknet för att veta var den ska sluta.
// Obs omvandlingsspecifikatione %s!