#include <stdio.h>
int main() {
	printf("Antal rader? ");
	int n;
	scanf("%d", &n);
	
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++ ) {
			printf("+");
		}
		printf("\n");
	}
	

	// "Baklänges" (jfr nastlade_repetitionssatser2 som är facit... (yttre räknaren skulle löpa baklänges...))

	printf("\n");
	for (i = 1; i <= n; i++) {
		for (j = n; j >= i; j-- ) {
			printf("*");
		}
		printf("\n");
	}



	return 0;
}


// 