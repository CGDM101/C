#include <stdio.h>
int main()
{
	int pris,  moms;
	printf("Varans pris samt dess moms: ");
	scanf("%d%d", &pris, &moms);
	int x = pris - moms;
	printf("Pris exkl. moms: %d och momsen: %d", x, moms);

	return 0;
}