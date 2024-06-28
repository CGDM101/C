#include <stdio.h>
int main() {
	printf("n? ");
	int n;
	scanf("%d", &n);
	int summa, k;
	for (summa = 0, k = 1; k <= n; k = k + 1)
		summa = summa + k;
	/*
	int summa = 0;	
	int k = 1;
	while (k <= n) {
		summa = summa + k;
		k = k + 1;
	}
	*/
	printf("Summan blir: %d", summa);

	return 0;
}