#include <stdio.h>
int main() {
	int t1 = 5, t2 = 10;
	double d = t1 - t2;
	if (d < 0)
		d = -d;	// Om t1 > t2 kommer d vara negativt, men man vill ändra det t positivt i utskriften.
	printf("Tidsskillnad: %.2f sek", d);
	
	return 0;
}