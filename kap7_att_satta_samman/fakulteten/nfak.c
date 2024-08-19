// Funktionsdefinitionen här, i stället för längst ner i main.


#include "nfak.h"	// Lämpligt att inkl äv här.
 
double nfak(int n) {
  double r=1;
    for (int i=2; i <=n; i++)
      r = r*i;
  return r;
}