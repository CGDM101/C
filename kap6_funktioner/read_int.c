double read_int(void) {
	int x;
	scanf("%d", &x);
	return x;
}

double read_double(void) {
	double x;
	scanf("%lf", &x);
	return x;
}

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


#include <stdio.h>

int main() {
	printf("x: ");	
	double xx = read_double();
	
	printf("n: ");	
	int nn = read_int();
	
	printf("Resultat: %.2f", upphojt_till(xx, nn));
		
	return 0;
}