#include <stdio.h>
int main() {
	int total, kortpris, biljettpris, ganger;
	printf("Pris årskort: ");
	scanf("%d", &kortpris);
	printf("Pris enkelbiljett: ");
	scanf("%d", &biljettpris);
	printf("Antalet ggr man planerar besöka gymmet under ett ar: ");
	scanf("%d", &ganger);
	total = ganger * biljettpris;
	if (total > kortpris)
		printf("Du tjanar pa att kopa arskort!");
	else
		printf("Det lonar sig inte att kopa arskort.");

	return 0;
}