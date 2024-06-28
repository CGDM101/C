#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	printf("Första sidan? ");
	scanf("%lf", &a);
	printf("Andra sidan? ");
	scanf("%lf", &b);
	c = sqrt(a*a + b*b);
	printf("Hypotenusans längd: %.2f\n", c);

	return 0;
}