#include <stdio.h>

// MED BREAK:

int main() {
	printf("k:");
	int k = 0;
	while (1) {	// OBS i evighet om ej break!
		printf("%3d", k);
		if (k >= 6)
			break;
		k = k + 2;
	}

	return 0;
}


// UTAN BREAK (while.c):

int main() {
	printf("k:");
	int k = 0;
	while (k < 6) {
		printf("%3d", k);
		k = k + 2;
	}

	return 0;
}

// Bör undvika break, men undantag när läser indata och ska testa om användaren vill avbryta.