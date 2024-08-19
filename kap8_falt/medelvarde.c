#include <stdio.h>
#define N 100

// Som sok_minsta.c fast även räkna medelvärdet för korten.

double mv(double korten[], int n){
	int i;
	double mv = 0;
//	int len = sizeof korten / sizeof korten[0]; 
	for (i = 0; i < n; i++){
		mv += korten[i];
	}
	mv/=n;
	return mv;
}

int sok_minsta(double a[], int forst, int sist){
	int m = forst;
	int i;
	for (i = forst+1; i < sist; i++) {
		if (a[i]<a[m])
		m = i;
	}
	return m;
}


int main(){

	double priser[N];
	
	int n=0;
	while (n < N) {
		printf("Pris/min för kort nr %d?", n+1);	
		if (scanf("%lf", &priser[n]) != 1)
			break;
		n++;
	}
	
	int billigast = sok_minsta(priser, 0, n-1);

	printf("\nKort nr %d är billigast.\n", billigast+1);
	printf("Kostnad: %4.2f kr/minut", priser[billigast]);

	// MEDELVÄRDET:
	
	printf("\nMedelvärdet: %f", mv(priser, n));



	return 0;
}