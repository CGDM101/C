#include <stdio.h>
int main() {
	float x;
	for (x = -1; x <=1; x = x + 0.1) {
		printf("%4.1f %8.2f\n", x, (2*x*x)-(5*x)+1);
	}	

	return 0;
}