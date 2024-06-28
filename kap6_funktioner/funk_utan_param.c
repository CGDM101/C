// Om man inte orkar skriva scanf varje gång :)

double read_double(void) {
	double x;
	scanf("%lf", &x);
	return x;
}

// Man kan ha tomma parenteser men det rekommenderas att använda det reserverade ordet void, eftersom  man då följer samma regler som gäller för funktionsdeklarationer.
