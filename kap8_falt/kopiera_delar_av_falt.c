#include <stdio.h>

int main(){

	// Kopiera element från f1 till f2:

	int f1[] = {19,34,6,18,7};
	int f2[] = {96,27,0,20};

	int i;
	for (i = 0; i < 3; i++)
		f2[i+1] = f1[i+2];
		
	for (i = 0; i < 4; i++)
		printf("%d ", f2[i]); // 96, 6, 18, 7


	return 0;
}