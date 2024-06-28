#include <stdio.h>
int main() {
	double totalArea = 10000;
	double area = 0.01;
	int dygn = 1;
	while (area < totalArea) {
	area = area * 2;
	dygn = dygn + 1;
	}	
	printf("Sjön blir täckt efter %d dygn", dygn);

	return 0;
}