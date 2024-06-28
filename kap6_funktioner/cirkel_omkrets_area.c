#include <stdio.h>
#define PI 3.141592

double omkrets(int radien) {
	return 2 * PI * radien;
}

double area(int radien) {
	return PI * radien * radien;
}

int main() {
	double r;
	printf("Radie? ");
	scanf("%lf", &r);

	double o, a;
	o = omkrets(r);
	a = area(r);
	

	printf("Cirkelns omkrets: %.2f och dess area: %.2f", o, a);	

	return 0;
}