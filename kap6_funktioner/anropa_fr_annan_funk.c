// Beräkna ränta på ränta: bx(1+0,01r)^n

#include <stdio.h>

double upphojt_till(double x, int n) {
	double res = 1;
	int i = 1;
	if (n >= 0)
		for (; i <= n; i++)
			res  = res * x;
	else
		for (; i <= -n; i++)
			res = res / x;
	return res;
}

double kapital(double b, double r, int n) {
	return b * upphojt_till(1+0.01*r, n);	// ANROPAR upphojt_till()
}

int main() {
	double res = kapital(50, 2, 5);	
	printf("res: %f", res);

	return 0;
}
