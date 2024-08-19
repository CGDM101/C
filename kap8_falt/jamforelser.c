#include <stdio.h>

int main(){

	// Testa om två fält är lika!


	int v[] = {1,2,3};
	int w[] = {1,2,3};

	if (v == w)
		printf("Lika");
	else
		printf("Olika"); // Detta skrivs ut pga att det är olika fält. Variablerna refererar till olika fält.
	


	// Korrekt resultat:

	printf("\nJämför fälten så här istället:\n");

	_Bool lika = sizeof v == sizeof w;
	int i = 0;
	for (i; lika && i < sizeof v/sizeof v[0]; i++)
		lika = v[i] == w[i];
	
	if (lika)
		printf("Lika");	// Korrekt; fälten är lika.
	else
		printf("Olika");



	// Enklare alternativ med MEMCMP:

	printf("\nAlternativ med MEMCMP:\n");

	if (sizeof v == sizeof w && memcmp(v, w, sizeof v) == 0 )	// Lazy evaluation här! Först kontrolleras längderna, och om lika så anropas memcmp.
		printf("Lika");
	else
		printf("Olika");

	// MEMCMP ger 0 om fälten är lika



	return 0;
}