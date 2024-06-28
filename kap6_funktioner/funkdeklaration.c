#include <stdio.h>


int nfak(int);	// Kan skriva namn, som dokumentation, om flera är av samma typ och det inte är självklart i vilken ordning de kommer.



int main() {
	int talet, fakulteten;
	printf("Tal: ");
	scanf("%d", &talet);

	fakulteten = nfak(talet);
	printf("Fakulteten av %d är %d", talet, fakulteten);

	return 0;
}



int nfak(int n) {
	int res = n;
	int i;
	if (n > 0)
		for (i = n; i > 2; i--)
			res = res * (i-1);
	else
		return 1;
	return res;
}