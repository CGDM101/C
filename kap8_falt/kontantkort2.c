#include <stdio.h>
#define N 100

// Användaren ska själv välja antal

int main(){
	double pris[N];
	
	int n=0;
	while (n < N) {
		printf("Pris/min för kort nr %d?", n+1);	
		if (scanf("%lf", &pris[n]) != 1)
			break;
		n++;
	}


	// Samma som förra:

	int billigast = 0;
	int i=1;
	for (i; i <n; i++){
		if(pris[i] < pris[billigast])
		billigast = i;
	}

	printf("\nKort nr %d är billigast.\n", billigast+1);
	printf("Kostnad: %4.2f kr/minut", pris[billigast]);


	return 0;
}


