#include <stdio.h>
int main() {
	float h;
	
	while (1) {
		int studs = 0;
		printf("Höjd, skriv negativt tal för att sluta: ");
		scanf("%f", &h);
		if (h < 0)
			break;
		while (h > 0.01) {
			h = h - (.3 * h);
			studs = studs + 1;
		}
		printf("Bollen studsade %d gånger innan den blev stilla (<1 cm studs).\n", studs);
	}
	return 0;
}

// SKILLNADEN ÄR ATT MAN LÄGGER ALLT I EN WHILE(1) OCH LÄGGER TILL IF/BREAK!

