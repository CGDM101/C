#include <stdio.h>

double kapital_uttag(double b, double r, int n, double ut) {
	if(ut > b*0.01) {	// uttag större än räntan
		printf("För stort uttag.");
		return 0;
	}
	else {
		int i;
		for(i = 1; i <=n; i++)	// Ett varv per år
			b = b + b*0.01*r;
		return b;
	}
}

int main() {
	double res = kapital_uttag(10000, 2, 10, 20);
	printf("%f", res);

	return 0;
}
