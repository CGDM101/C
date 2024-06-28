#include <stdio.h>

double medelv(double a, double b) {
	return (a+b)/2;
}

int main() {
	double x, y;
	printf("Det första talet: ");
	scanf("%lf", &x);
	printf("Det andra talet: ");
	scanf("%lf", &y);

	double mv = medelv(x, y);

	printf("Medelvärde: %f", mv);

	return 0;
}

// Vid anropet läggs värdet av det första argumentet i parametern a och värdet av det andra argumentet i parametern b.
// Observera att varken x eller y påverkas av detta eller vad som senare sker inne i funktionen.
// Denna teknik att överföra argumentens värden till en funktion kallas VÄRDEANROP och innebär alltså att argumentens värden KOPIERAS till lokala KOPIOR inne i funktionen.

// När funktionsanropet är avslutat, existerar inte de båda parametrarna a och b längre.

// Man kan även skriva uttryck som argument, t ex medelv(x*y, x+10)