#include <stdio.h>

double x = 1.5;

double f(double x){
	return x;
}


int main(){
	double y = 3.0;		// Testa byt namn!
	if (y > 0){
		double y = 0.0; // Om ej double, så printas 0.0.
	}
	printf("%f", f(y));

	return 0;
}

// Y som deklareras inne i if-satsen är bara synlig där.

// Om man byter namn på den första variabeln y, så får man felutskrift() undeclared identifier 'y' på raden med printf, eftersom det inte finns någon synlig variabel som heter y. 
