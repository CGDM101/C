#include <stdio.h>

double upphojt_till(double x, int n) {
	double res = 1;	// LOKAL VARIABEL
	int i = 1;	// LOKAL VARIABEL
	if (n >= 0)
		for (; i <= n; i++)	// Initieringsdel saknas...
			res  = res * x;
	else
		for (; i <= -n; i++)
			res = res / x;
	return res;
}

int main() {
	double xx;
	int nn;
	printf("x? ");
	scanf("%lf", &xx);
	printf("n? ");
	scanf("%d", &nn);
	printf("Resultat: %.2f", upphojt_till(xx, nn));
	

	return 0;
}

// Lokala variabler har en begränsad livslängd. De skapas i det ögonblick funktionen anropas och existerar sedan bara under den tid som funktionsanropet pågår (dvs t.o.m. att return exekverats).