#include <stdio.h>
#include <math.h>

int main()
{
	int x1, x2, y1, y2;
	
	printf("Koordinat x1: ");
	scanf("%d", &x1);
	printf("Koordinat y1: ");
	scanf("%d", &y1);
	
	printf("Koordinat x2: ");
	scanf("%d", &x2);
	printf("Koordinat y2: ");
	scanf("%d", &y2);
	
	float avstand = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
	printf("Avstånd mellan de två punkterna: %f", avstand);

	return 0;
}