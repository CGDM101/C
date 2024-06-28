#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
	float volym, area;
	float sphere_radius = 3;
	volym = (4 * PI * (sphere_radius * sphere_radius * sphere_radius)) / 3;	
	area = 4 * PI * (sphere_radius * sphere_radius);
	printf("Sfärens volym: %.2f\n", volym);
	printf("Sfärens area: %.2f", area);

	return 0;
}