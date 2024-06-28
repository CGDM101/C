#include <stdio.h>
int main() {
  printf("n? ");
  int n;
  scanf("%d", &n);
  double sum = 0;
  int i=1;
  while (i <= n) {
    sum = sum + 1.0/i;	// Tänk på att undvika heltalsdivision när du beräknar termerna i serien!
    i= i + 1;
  }
  printf("Serien blir %f", sum); 

	return 0;
}
