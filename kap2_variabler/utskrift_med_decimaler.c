#include <stdio.h>
#define PI 3.141592653589793

int main()
{
	double r = 5;
	double omkr = 2 * PI * r;
	double area = PI * r * r;
	
	printf("Omkrets: %.3f\n", omkr);	// Tre decimalers precision.
	printf("Area: %.3f", area);

	return 0;
}