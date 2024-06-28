// Skillnaden är att testuttrycket beräknas och testas EFTER varje varv, i stället för före.

int main() {
	int svar;
	do {
	// Läs indata
	printf("Skriv indata: ");
	// Gör beräkningar och visa resultat
	// ...
	printf("En ny beräkning? Skriv 1 för ja, 0 för nej. ");
	scanf("%d", &svar);		
	} while(svar);

	return 0;
}
