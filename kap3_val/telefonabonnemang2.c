#include <stdio.h>
int main() {
	int minuter;
	printf("Hur många minuter kommer du att ringa per månad? ");
	scanf("%d", &minuter);
	if (minuter <= 33) {
		printf("\"Kontant\" är det billigaste abonnemanget.");
	}
	else if (minuter > 33 && minuter <= 66) {
		printf("\"Normal\" är det billigaste abonnemanget.");
	}
	else {
		printf("\"Plus\" är det billigaste abonnemanget.");
	}

}