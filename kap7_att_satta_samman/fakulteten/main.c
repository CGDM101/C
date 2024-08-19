#include <stdio.h>
#include "nfak.h"	// Referera till funktionsdekl. i inkluderingsfilen nfak.h
 
int main () {
  int n;
  printf("n? ");
  scanf("%d", &n);
  printf("n! = %.0f", nfak(n));
}