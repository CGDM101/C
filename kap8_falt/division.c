#include <stdio.h>
#define N 10

int main(){
	double f[N];

	int i;
	for (i = 0; i < N; i++){
		f[i] = 1.0 / (i+1);	// OBS måste vara 1.0 för att inte få heltalsdivision!!
	}

	for (i = 0; i < N; i++){
		printf("%f ", f[i]);
	}

	return 0;
}