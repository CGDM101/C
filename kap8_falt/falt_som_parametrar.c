#include <stdio.h>

// Man ska akdrig ange storlek när man deklarerar en parameter som är ett fält!

void skriv(double a[], int n) {

	int i = 0;
	for (i; i < n; i++)
		printf("%1.1f\n", a[i]);

	// Parametern n innehåller värdet 3 som är en _kopia_ av argumentet 3.
	// Parametern a innehåller inte ett fält, istället är det en _referens_ till fälet v, som gavs som argument. --> En PEKARE. Med hjälp av denna pekare kan man inne funktionen skriv komma åt elementen i fältet v.

	// Man kan skriva double *a i st f double a[], eftersom a är en pekare.

	// Vi måste ha med int n för att få reda på antalet element i a. Operatorn SIZEOF funkar inte, då skulle man få strl på _parametern_ a, som ju är en pekare.

}

int main(){

	double v[] = {2.7,5.4,0.9};
	skriv(v, 3);


	return 0;
}