#include <stdio.h>
#include <limits.h> // Heltalen
#include <float.h>  // Flyttalen

int main()
{
	printf("Minsta int: %d\n", INT_MIN);
	printf("Största int: %d\n", INT_MAX);
	printf("Minsta short int: %d\n", SHRT_MIN);
	printf("Största short int: %d\n", SHRT_MAX);
	printf("Minsta long int: %d\n", LONG_MIN);
	printf("Största long int: %d\n", LONG_MAX);

	printf("Antal decimala siffrors nogrannhet för float: %d\n", FLT_DIG);
	printf("Antal decimala siffrors nogrannhet för double: %d\n", DBL_DIG);

	return 0;
}