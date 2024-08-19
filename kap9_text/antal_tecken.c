#include <stdio.h>
int main() {
  printf("Skriv något: ");
  int n = 0, c;
  while ( (c = getchar()) != EOF )
    n++;
  printf("Du skrev %d tecken\n", n); 	// Räknar även enter, mellanslag och EOF. Men om man inte trycker enter efter vad man skrivit blir det 0. Tecknen samlas i en buffert, och den överförs inte till programmet förrän användaren trycker på enter. Det är först då programmet kan läsa de inmatade tecknen.
}