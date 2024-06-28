#include <stdio.h>
int main() {
	int x;
	for (x = -10; x <=10; x = x + 1)
		printf("%3d %4d\n", x, (2*x*x)-(5*x)+1);

	return 0;
}