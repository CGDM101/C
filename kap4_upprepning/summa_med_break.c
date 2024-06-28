#include <stdio.h>
int main() {
	while(1) {			//
		printf("n? Ange tal <=0 för att sluta. ");
		int n;
		scanf("%d", &n);
		if (n <= 0)		//
			break;		//
		int summa = 0;	
		int k = 1;
		while (k <= n) {
			summa = summa + k;
			k = k + 1;
		}
		printf("Summan blir: %d\n", summa);
	}

	return 0;
}




// UTAN BREAK (summa.c)
/*
#include <stdio.h>
int main() {
	printf("n? ");
	int n;
	scanf("%d", &n);
	int summa = 0;	
	int k = 1;
	while (k <= n) {
		summa = summa + k;
		k = k + 1;
	}
	printf("Summan blir: %d", summa);

	return 0;
}
*/