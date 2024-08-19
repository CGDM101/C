#include <stdio.h>

double kol_sum(double f[][5], int antal_rader, int k){
	double sum = 0;
	int i = 0;
	for (i; i<antal_rader; i++)
		sum = sum +f[i][k];
	return sum;
}

int main(){
	double v[4][5];
	int i=0;int j = 0;

	v[0][2] = 1;

	for (i= 1;i<4;i++){
		v[i][2] = v[i-1][2] /10;
	}
	printf("Summan av tredje kolumnen är: %f", kol_sum(v, 4,2));


}