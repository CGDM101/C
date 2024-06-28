int ar_kvinna(long long int nr) {
	nr = nr / 10;	// Pga heltalsdivision försvinner den sista siffran...
	return nr % 2 == 0;
}

// Dåligt alt:
if (nr % 2 == 0)
	return 1;
else
	return 0;


// Man kan använda _Bool istället för int.


// Kan använda funktion som testuttryck o sanningsvärde så här:

if (ar_kvinna(pnr))
	printf("Det är en kvinna.");