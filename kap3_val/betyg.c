#include <stdio.h>
int main(){
	int poang;
	printf("Poäng: ");
	scanf("%d", &poang);
	if (poang < 25)
		printf("Uselt");
	else if (poang < 30)
		printf("Betyg: E");
	else if (poang < 35)
		printf("Betyg: D");
	else if (poang < 40)
		printf("Betyg: C");
	else if (poang < 45)
		printf("Betyg: B");
	else
		printf("Betyg: A");
	return 0;
}