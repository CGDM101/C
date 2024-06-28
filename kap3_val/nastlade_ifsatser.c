#include <stdio.h>
int main() {

	// IF har en nästlad if:

	if (temp < 18)
		if (temp < 10)
			printf("Sätt på värmen och jackan!");
		else
			printf("Sätt på värmen!");
	
	
	// ELSE har en nästlad if:

	if (temp < 18)
		printf("Sätt på värmen!");
	else
		if (temp > 22)
			printf("Stäng av värmen!");

	
	return 0;

	// Jfr exemplet med flervalssituationer!
}