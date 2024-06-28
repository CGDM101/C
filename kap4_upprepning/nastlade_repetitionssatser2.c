#include <stdio.h>
int main() {
	printf("Antal rader? ");
	int n;
	scanf("%d", &n);
	
	int i, j;
	for (i = n; i >= 1; i--) {
		for (j = 1; j <= i; j++ ) {
			printf("+");
		}
		printf("\n");
	}
}