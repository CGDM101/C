#include <stdio.h>

// Läser alla tecken som finns kvar på den rad användaren  har skrivit och hoppa över dem. Den läser ett tecken i taget tills den har läst in ett radslutstecken eller tills användaren markerat end of file.

void skip_line(void){
	int i;
	while( (i = getchar()) != EOF )
		;	// En tom sats 
}

int main(){
	int svar; 
	do {
		// Läs indata
		printf("Skriv indata: ");
		// Gör beräkningar och visa resultat
		// ...
		printf("Vill du göra en ny beräkning? (j eller n)");
		svar = getchar();
		skip_line();
	} while (svar == 'j');

	return 0;
}