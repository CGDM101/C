#include <stdio.h>

int main(){

	int i;
	
	int a[100];
	for (i = 0; i < 100; i++)
		a[i] = i;	// Initiera fältet

	int b[20];
	for (i = 0; i < 20; i++)
		b[i] = 0;	// Initiera fältet


	for (int i=0; i<5; i++){
		b[i+10] = a[i+50];
		b[i+5] = a[i+95];
	}


/*
	b[10] = a[50];
	b[11] = a[51];
	b[12] = a[52];
	b[13] = a[53];
	b[14] = a[54];

	b[5] = a[95];
	b[6] = a[96];
	b[7] = a[97];
	b[8] = a[98];
	b[9] = a[99];
*/
	
	for (i = 0; i < 20; i++)
		printf("%d\n", b[i]);



	return 0;
}