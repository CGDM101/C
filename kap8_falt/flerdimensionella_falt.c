// Ex tabeller; multiplikationstabell, avståndstabell

#include <stdio.h>
int main(){
	int tab[10][10];
	int i,  j;

	for (i =0;i<10;i++){
		for (j = 0; j<10;j++){
			tab[i][j]=(i+1)*(j+1);
			printf("%d\t", tab[i][j]); // Jfr m t 8d!
		}
		printf("\n");
	}

	return 0;
}