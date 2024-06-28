#include <stdio.h>
int main() {
	printf("n? ");
	int n;
	scanf("%d", &n);
	int summa = 0;	
	int k = 1;
	while (k <= n) {
		summa = summa + k * k;
		k = k + 1;
	}
	printf("Summan av kvadraterna blir: %d", summa);

	return 0;
}




