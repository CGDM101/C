#include  <math.h>
#define SIZE 100

#include <stdio.h>

int main() {
	double w[SIZE];
	
	int i = 0;
	for (i; i < SIZE; i++) {
		w[i] = sqrt(i);
		printf("%.2f\n", w[i]);
	}
}