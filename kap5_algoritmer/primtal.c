#include <stdio.h>
int main() {
	
	// Upprepa följande ett godtyckligt antal gånger
	
	while(1) {
	
		// 1 Läs in ett tal och avbryt om användaren vill sluta
	
		int talet;
		printf("Talet? ");
		if (scanf("%d", &talet) != 1)
			break;

	// 2 Undersök om talet är ett primtal
	
	// 2.1 Sätt variabeln ar_primtal till sant (förfinat från 2)
	
	_Bool ar_primtal = 1;	

	// 2.2 Försök dividera det inlästa talet med alla tal som är mindre än talet och större än 1. Om någon division går jämnt ut så är ändra ar_primtal till falskt (förfinat från 2)

	// 2.2.1 Upprepa följande för alla tal k i intervallet 2 till talet-1 (förfinat fr 2.2)
	// 2.2.2 Om resten blir 0 när man dividerar talet med k så sätt ar_primtal till falskt (förfinat fr 2.2)
	int k;
	for (k = 2; k < talet; k++)
		if (talet % k == 0)
			ar_primtal = 0;	

	// 3 Visa resultatet

	if (ar_primtal)
		printf("Primtal.\n");
	else
		printf("Ej primtal.\n");



	}
	return 0;
}