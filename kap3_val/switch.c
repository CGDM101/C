#include <stdio.h>
int main(){
	printf("Kategori 0 - Barn under 2 år\n");
	printf("Kategori 1 - Barn under 12 år\n");
	printf("Kategori 2 - Vuxen\n");
	printf("Kategori 3 - Pensionär\n");
	printf("Kategori 4 - Student\n");
	printf("Vilken kategori tillhör du? ");
	int kategori, pris;
	scanf("%d", &kategori);
	
	switch(kategori) {	// Testuttrycket 'kategori' måste vara av heltalstyp.
		case 0:
			pris = 0;
			break;
		case 1:
			pris = 3145;
			break;
		case 2:
			pris = 4295;
			break;
		case 3: case 4:	// OBS 4 blir samma som 3!
			pris = 3795;
			break;
		default:
			pris = 0;
			printf("Felaktig kategori.");
	}
	printf("Pris: %d", pris);

	return 0;
}