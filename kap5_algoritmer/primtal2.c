// Utgå från primtal.c men läs in ett positivt heltal n och skriv ut alla primtal som är mindre än eller lika med n. Utforma utskriften så att högst 10 primtal visas ut per rad. Tips: Prova alla tal i intervallet 1 till n och se om de är o´primtal.

#include <stdio.h>
int main() {

	printf("Ange talet n? ");
int n;
scanf("%d", &n);
int antal = 0;   // antalet funna primtal
for (int talet=1; talet<=n; talet++) {
// Undersök om talet är ett primtal
_Bool ar_primtal = 1;
for (int k = 2; k<talet; k++)
  if (talet % k == 0)
    ar_primtal = 0;
  if (ar_primtal) {
    antal++;
    printf("  %d", talet);
    if (antal % 10 == 0)  // visa 30 tal per rad
      printf("\n");
  }
}


	return 0;
}