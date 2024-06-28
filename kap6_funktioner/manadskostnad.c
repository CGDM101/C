#include <stdio.h>

double manadskostnad(int antal, int minDag, int minOvr) {
	return 50 + antal*0.60 + minDag*2.50 + minOvr*0.55;
}

int main() {
	int n, dag, ovr;
	printf("Antal samtal? ");
	scanf("%d", &n);
	printf("Minuter dagtid? ");
	scanf("%d", &dag);
	printf("Minuter övrig tid? ");
	scanf("%d", &ovr);

	double kos = manadskostnad(n, dag, ovr);

	printf("Kostnad: %.2f", kos);

	return 0;
}