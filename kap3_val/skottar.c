#include <stdio.h>
int main(){
	printf("Skriv ett årtal: ");
	int ar;
	scanf("%d", &ar);
	if ((ar % 4 == 0 && ar % 100 != 0) || ar % 400 == 0)	// Skottår är sådana år som är jämnt delbara med 4, med undantag för sådana år som är jämnt delbara med 100. Dock är sådana år som är jämnt delbara med 400 är skottår.
		printf("Skottår!");
	else
		printf("Inte skottår!");

	return 0;
}