// Använd EOF för att markera slut på indata:

#include <stdio.h>
int main() {
	while(1) {
		printf("Ange n, markera EOF för att sluta: ");
		int n;
		if (scanf("%d", &n) != 1) // Ej en inläsning har skett.
			break;
		printf("Resultatet är %d\n", n*n*n);
	}

	return 0;
}