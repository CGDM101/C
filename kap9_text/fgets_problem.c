#include <stdio.h>

void skip_line(void){
	int i;
	while( (i = getchar()) != EOF )
		;
}






_Bool remove_nl(char a[]) {
	int i = strlen(a)-1;	// Indexet före nolltecknet
	if (a[i] = '\n') {
		a[i] = '\0';
		return 1;
	}
	return 0;
}

// Ibland kan radslutstecknet finnas med bland de inlästa tecknen i fältet. Denna metod kan användas mot detta efter inläsning.




_Bool read_line(char a[], int n) {
	if (fgets(a, n, stdin) == NULL)
		return 0;	// Det blev end of file
	if (!remove_nl(a))	// Ta bort ev. '\n'
		skip_line();	// Hela raden lästes inte, rensa
	return 1;		// Inläsningen lyckades

}

// Denna hjälper även mot att fgets slutar läsa in efter 9 tecken. I inbufferten kan ligga tecken kvar som användaren skrivit in, men som är olästa. Använder skip_line för att rensa inläsningsbufferten.





int main(){
	printf("Vad heter du? ");
	char namn[10];
	read_line(namn, 10); // Istället för scanf("%s", namn);
	printf("Hej %s", namn);

	return 0;
}
