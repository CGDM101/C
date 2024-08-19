#include <stdio.h>
#include "kolapp.h"

int main() {
	while(1) {
		printf("Skriv 1 om du är kund, 0 annars: ");
		int kund;
		if (scanf("%d", &kund) != 1)
			break;
		if (kund)
			printf("Du fick nr: %d\n", ta_lapp());
		else {
			int nr = betjana_kund();
			if (nr > 0)
				printf("Betjäna nr: %d\n", nr);
			else
				printf("Inga kunder i kö\n");
		}
	}

	return 0;
}