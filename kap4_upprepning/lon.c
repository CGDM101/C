#include <stdio.h>
int main() {
	int dagar = 1; double dagens_lon = 0.01; double totalt_belopp = 0.01;
  while (totalt_belopp < 10000000) {
    dagar++;
    dagens_lon = dagens_lon * 2;
    totalt_belopp = totalt_belopp + dagens_lon;
  }
  printf("Man behöver arbeta %d dagar", dagar);      
}


