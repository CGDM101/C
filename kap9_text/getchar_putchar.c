#include <stdio.h>	// getchar(), putchar(), EOF
int main(){
	printf("Skriv ett tecken: ");
	char teck = getchar();	// getchar() returnerar en int (teckenkoden)
	printf("Du skrev tecknet: ");
	putchar(teck);


	// Med EOF-värdet

	int i;	// OBS dekl s int, ej char! Man jfr ju med EOF som är en int.
	while( i = getchar() != EOF )
		putchar(i);

	// Getchar ger en int (teckenkoden). Den ger negativt värde om användaren tryckt in teckenkombinationen för end of file. Detta värde heter EOF och är definierat i stdio.h

	return 0;
}