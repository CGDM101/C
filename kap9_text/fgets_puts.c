// Problem med scanf: 

// Inläsningen avbryts vid vitt tecken, dvs man kan inte skriva in för- och efternamn. (Men går att anv flera var så klart.)
// Ingen kontroll om användaren skriver in för lång sträng. Data i närheten av variabeln namn i primärminnet kan förstöras.

// FGETS är säkrare:

#include <stdio.h>
int main(){
	printf("Vad heter du? ");
	char namn[10];
	fgets(namn, 10, stdin);  // scanf("%s", namn);	
	printf("Hej ");
	puts(namn);

	return 0;
}

// fgets ger NULL om inläsningen  misslyckades, ex end of file.



// Istället för printf kan man anropa PUTS. I den ingår ny rad.