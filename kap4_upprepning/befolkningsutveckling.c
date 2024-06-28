#include <stdio.h>
int main() {
	int ar, antal = 26000;
	printf("År? ");
	scanf("%d", &ar);
	int i;
	int diffInflyttadeUtflyttade = 300-325; double diffFoddaDoda = 0.7-0.6;
	for (i = 2016; i <= ar; i++)
		antal += diffInflyttadeUtflyttade + antal*diffFoddaDoda/100+0.5;

	printf("Invanarantal detta år: %d", antal);

	return 0;
}

