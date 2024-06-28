#include <stdio.h>
int main(){
	int alder, pris;
	if (alder < 12)
		pris = 3145;
	else
		if (alder < 65)
			pris = 4295;
		else
			pris = 3795;
	printf("Pris %d kr", pris);

	// Detta är en flervalssituation, inte bara två som i förra exemplet med temperaturen. Det är flera likvärdiga alternativ, inte bara antingen eller. Man använder då ELSE IF:

	if (alder < 12)
		pris = 3145;	// Alt 1, barn
	else if (alder < 65)	
		pris = 4295;	// Alt 2, vuxen
	else
		pris = 3795;	// Alt 3, pensionär
	printf("Pris %d kr", pris);

	// Fördelen är att det är lätt att redigera programtexten, t ex om man vill ha spädbarn med:

	if (alder < 2)
		pris = 0;	// alt. 0!
	else if (alder < 12)
		pris = 3145;
	else if (alder < 65)	
		pris = 4295;
	else
		pris = 3795;
	printf("Pris %d kr", pris);



	return 0;
}