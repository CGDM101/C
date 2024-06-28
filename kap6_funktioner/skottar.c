#include <stdio.h>

int ar_skottar(int ar) {
	return (ar % 4 == 0 && ar % 100 != 0) || ar % 400 == 0;
}

int main(){
	printf("Skriv ett årtal: ");
	int ar;
	scanf("%d", &ar);


	if (ar_skottar(ar))
		printf("Skottår!");
	else
		printf("Inte skottår!");


	return 0;
}