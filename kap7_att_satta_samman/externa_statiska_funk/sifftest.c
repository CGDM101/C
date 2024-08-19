#include <stdio.h>
#include "siffror.h"

int main(){
	long int t;
	int s;
	printf("Markera EOF när du vill sluta\n");
	while(1) {
		printf("Skriv heltal och en siffra: ");
		if (scanf("%ld %d", &t, &s) != 2)
			break;
		printf("Talet %ld har %d siffror\n", t, langd(t));
		int ant = antal(t, s);
		printf("siffran %d förekommer %d gånger\n", s, ant);
		if (ant > 0)
			printf("Den första ggn som siffra nr %d\n", plats(t, s));
	}	

	return 0;
}