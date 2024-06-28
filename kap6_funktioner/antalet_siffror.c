// Tips: Som summa_siffror.c men räkna antalet varv i st f summan.

#include <stdio.h>

int antalet_siffror(int talet) {
	int varv = 0;
	while (talet > 0) {
		talet = talet / 10;
		varv += 1;
	}
	return varv;
	
}

// Test av funktionen: 

int main() {
	int k;
	printf("Ett heltal? ");
	scanf("%d", &k);

	int varv = antalet_siffror(k);

	printf("Antal siffror i talet: %d", varv);

	return 0;
}
