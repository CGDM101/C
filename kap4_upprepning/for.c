#include <stdio.h>
int main() {
	printf("k:");
	int k;				// Om ej C99 får ej deklarationen av räknaren läggas i initialiseringsdelen!
	for (k = 0; k < 6; k = k + 2)	// OBS behövs inte klammerparenteser!
		printf("%3d", k);

	return 0;
}


// FÖRUT MED WHILE:

/*
printf("k:");
int k = 0;
while (k < 6) {
	printf("%3d", k);
	k = k + 2;
}
*/