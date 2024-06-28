#include <stdio.h>
int main() {
	float h;
	int studs = 0; // ~ räknare, tänk i!
	printf("Höjd i meter vilken bollen släpps ifrån: ");
	scanf("%f", &h);
	while (h > 0.01) {
		h = h - (.3 * h);
		studs = studs + 1;
	}
	printf("Bollen studsade %d gånger innan den blev stilla (<1 cm studs).", studs);

	return 0;
}

