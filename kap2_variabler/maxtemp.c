#include <stdio.h>
#include <math.h>
int main()
{
	double temp1, temp2, temp3, temp4, temp5, temp6, temp7;
	double max;
	printf("Temperaturer under veckan: ");
	scanf("%lf%lf%lf%lf%lf%lf%lf", &temp1, &temp2, &temp3, &temp4, &temp5, &temp6, &temp7);
	
	max =  fmax(temp7, fmax(temp6, fmax(temp5, fmax(temp4, fmax(temp3, fmax(temp1, temp2))))));
	printf("Max: %.2lf", max); // Två decimalers precision av en lf.

	return 0;
}

