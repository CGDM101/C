#include <stdio.h>
#include <stdlib.h>
#include "siffror.h"


// STATISK funktion:

static int hjalp (long int t, int s, _Bool sok_plats) {
	int antal = 0, p = -1;
	t = labs(t); // Se till att t inte är negativ.
	int i;
	for (i = langd(t); i > 0; i--, t /= 10)
		if (t % 10 == s) {
			p = i;
			antal++;
		}
	if (sok_plats)
		return p;
	else
		return antal;
}

// En statisk funktion är känd bara i den fil där dess definition finns och därför kan anropas bara från andra funktioner i samma fil.
// När kompilatorn kompilerar en statisk funktion lägger den inte till någon extra information i objektfilen. I länkningssteget är därför funktionen okänd.

// Detta är en typisk användning av statiska funktioner. hjalp() är en hjälpfunktion som bara är intressant inne i modulen och som man inte ska kunna anropa från andra delar av programmet.


int langd(long int t) {
	if (t == 0) // specialfall
		return 1;
	int i = 0;
	for (; t != 0;i++) 
		t /= 10;
	return i;
}

int plats(long int tal, int siffra) {
	return hjalp(tal, siffra, 1);
}

int antal(long int tal, int siffra) {
	return hjalp(tal, siffra, 0);
}