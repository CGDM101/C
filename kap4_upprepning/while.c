#include <stdio.h>
int main() {
	printf("k:");
	int k = 0;
	while (k < 6) {
		printf("%3d", k);
		k = k + 2;
	}

	return 0;
}