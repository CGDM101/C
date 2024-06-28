#include <stdio.h>
int main() {
	int minuter, minutpris;
	float kostnad;
	printf("Skriv in antalet minuter per månad: ");
	scanf("%d", &minuter);
	printf("Skriv in minutpris: ");
	scanf("%d", &minutpris);
	kostnad = minuter * minutpris;
	if (minuter >= 1000)
		kostnad = kostnad - (kostnad * 0.10);	// 10% rabatt	
	printf("Månadskostnaden är %.0f öre.", kostnad);
	
	return 0;
}