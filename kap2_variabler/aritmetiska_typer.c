#include <stdio.h>
int main()
{
	// Antal byte de grundläggande aritmetiska typerna representeras med i den kompilator jag använder:

	int antal_bytes;
	
	antal_bytes = sizeof(char);
	printf("Antal byte i en char: %d\n", antal_bytes);
	antal_bytes = sizeof(short int);
	printf("Antal byte i en short int: %d\n", antal_bytes);
	antal_bytes = sizeof(int);
	printf("Antal byte i en int: %d\n", antal_bytes);
	antal_bytes = sizeof(long int);
	printf("Antal byte i en long int: %d\n", antal_bytes);
	antal_bytes = sizeof(long long int);
	printf("Antal byte i en long long int: %d\n", antal_bytes);
	
	antal_bytes = sizeof(float);
	printf("Antal byte i en float: %d\n", antal_bytes);
	antal_bytes = sizeof(double);
	printf("Antal byte i en double: %d\n", antal_bytes);
	antal_bytes = sizeof(long double);
	printf("Antal byte i en long double: %d\n", antal_bytes);

	// Heltalstyperna finns i två varianter, signed och unsigned.
	// Det är underförstått att de är signed om man inte skriver något.
	
	unsigned short int usi;
	unsigned int ui;
	unsigned long int uli;

	antal_bytes = sizeof usi; 
	printf("Antal byte i en UNSIGNED short int: %d\n", antal_bytes);
	antal_bytes = sizeof ui; 
	printf("Antal byte i en UNSIGNED int: %d\n", antal_bytes);
	antal_bytes = sizeof uli; 
	printf("Antal byte i en UNSIGNED long int: %d\n", antal_bytes);

	return 0;
}