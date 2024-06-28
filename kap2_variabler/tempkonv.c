#include <stdio.h>

int main()
{
	double fahr;
	double cels;
	printf("Temp. i grader Fahrenheit: ");
	scanf("%lf", &fahr);
	cels = (fahr-32) * 5/9;
	printf("Omvandlat till grader Celsius: %.0lf", cels); // .0 för inga decimaler (men ändå avrundat korrekt!)

	return 0;
}