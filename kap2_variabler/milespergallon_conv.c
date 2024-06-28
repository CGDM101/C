#include <stdio.h>
int main()
{
	int miles, gallon;
	float liter, mil;
	float resultat;	
	printf("Antal miles? Antal gallon? ");
	scanf("%d%d", &miles, &gallon);
	liter = gallon * 3.785;
	mil = miles * 1.609;
	resultat = liter / mil;
	printf("Bensinförbrukningen på denna sträcka är: %f liter per mil\n", resultat);

	printf("(%d gallon översatt till liter: %f)\n", gallon, liter);
	printf("(%d miles översatt till mil: %f)",miles, mil);

	return 0;
}