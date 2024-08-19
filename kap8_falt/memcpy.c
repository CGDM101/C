#include <stdio.h>

int main(){

	double v[] = {1.5,2.8,4.3};
	double w[] = {0,0,0};

	memcpy(w, v, sizeof w); // Kopierar fr v till w


	int i = 0;
	for(i; i < 3; i++)
		printf("%.1f ", w[i]);

	return 0;
}