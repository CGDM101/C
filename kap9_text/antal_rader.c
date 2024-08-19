#include <stdio.h>
int main(){
	int rader=0, c;
	printf("Skriv några rader:\n");
	while((c = getchar()) != EOF){	// OBS måste vara parenteser runt första uttrycket f att inte andra ska utvärderas först ( != precedens före = )
		if (c == '\n')
			rader++;
	}
	
	printf("Du skrev %d rader", rader);
	
	return 0;
}