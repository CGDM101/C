# include <stdio.h>
int main(){
	int pris = 50, alder = 15;
	int billig = pris <= 100;	// _Bool fr o m C99; bool med true/false och <stdbool.h> från C11.
	int barn = alder < 12;
	printf("Billigt? %d\n", billig);
	printf("Barn? %d", barn);

	return 0;
}