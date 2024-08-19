#include <stdio.h>

int main() {
	double v[] = {0,0,0,0,0};
	int antal = sizeof v / sizeof v[0];	// 5

	v[0] = 1.5;
	v[antal - 1] = 7.3;

	int i = 0;
	for (i; i < antal; i++)
		printf("%.1f ", v[i]);	
}


// sizeof a/sizeof a[0];

// Sizeof ger hela fältets längd, uttryckt i byte, och sizeof a[0] ger storleken för ett element.

// Operatorn SIZEOF fungerar inte inne i en funktion om fältet är en parameter till funktionen.