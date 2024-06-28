// Euklides algoritm beräknar den största gemensamma delaren till två positiva heltal m och n (dvs det största heltal som både m och n är jämnt delbara med).



#include <stdio.h>
int main() {
  int m, n, r;
  printf("Första talet? "); 
  scanf("%d", &m);
  printf("Andra talet? "); 
  scanf("%d", &n);
  while (1) {
	// Dividera m med n och beteckna resten vid divisionen med r.
    r = m % n;
	// Om r=0 så är beräkningen klar och resultatet finns i n.
    if (r == 0)
      break;
	// Sätt annars m till n och n till r och gå tillbaka till steg 1.
    m = n;
    n = r;   
  }
  printf("Största gemensamma delare är %d", n);
}
