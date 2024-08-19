#include <stdio.h>

int main(){
	double a[] = {0,0,0,0};
	int b[] = {5,10,20,50,100,200,500};
	
	int i=0;
	for (i; i<sizeof a/sizeof a[0]; i++)
		printf("%f\n", a[i]);

	for(i=0; i<sizeof b/sizeof b[0]; i++)
		printf("%d\n", b[i]);

	return 0;
}