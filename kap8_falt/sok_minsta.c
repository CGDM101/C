#include <stdio.h>

int sok_minsta(double a[], int forst, int sist){
	int m = forst; // Index för hitills minsta värde
	int i;
	for (i = forst+1; i < sist; i++) {
		if (a[i]<a[m])
		m = i; // Nytt minsta värde funnet.
	}
	return m;
}



// Samma som kontantkort2.c men med funktionen sok_minsta:

#define N 100

int main(){
	double pris[N];
	
	int n=0;
	while (n < N) {
		printf("Pris/min för kort nr %d?", n+1);	
		if (scanf("%lf", &pris[n]) != 1)
			break;
		n++;
	}


	int billigast = sok_minsta(pris, 0, n-1);	// "sok_minsta" i st f "0;"

	/*int i=1;
	for (i; i <n; i++){
		if(pris[i] < pris[billigast])
		billigast = i;
	}*/

	printf("\nKort nr %d är billigast.\n", billigast+1);
	printf("Kostnad: %4.2f kr/minut", pris[billigast]);


	return 0;
}