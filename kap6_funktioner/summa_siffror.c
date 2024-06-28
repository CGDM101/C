#include <stdio.h>

int siff_sum(int tal) {
	int sum = 0;
	while (tal > 0) {
		sum = sum + tal % 10; // Lägg till sista siffra (resten s uppstår när man div. med 10)
		tal = tal / 10; // Hur många hela ggr 10 går i tal (blir resten av siffrorna när sista är borttagen)
	}
	return sum;
}

int main() {
	int k;
	printf("Ett heltal? ");
	scanf("%d", &k);
	printf("Siffersumma: %d", siff_sum(k));	


	return 0;
}