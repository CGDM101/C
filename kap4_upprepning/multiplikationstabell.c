#include <stdio.h>
int main() {
	int rader;
	printf("Antal rader? ");
	scanf("%d", &rader);
	int i, j;
	for (i = 1; i <= rader; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", i*j);
		}
		printf("\n");
	}

	return 0;
}