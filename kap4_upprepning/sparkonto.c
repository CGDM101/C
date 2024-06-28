#include <stdio.h>
int main() {

	// Läs indata 
	printf("Räntesats: ");
	double ranta;
	scanf("%lf", &ranta);
	printf("Antal år? ");	
	int n;
	scanf("%d", & n);
	
	// Skriv ut tabell:
	double kapital = 1000;	
	int ar;
	for (ar = 1; ar <= n; ar = ar + 1) {
		kapital = kapital + kapital * 0.01 * ranta;
		printf("%2d %6.0f\n", ar, kapital);
	}

	return 0;
}