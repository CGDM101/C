#include <stdio.h>
int main()
{
	printf("Hur gammal är du? ");
	int alder, pris;
	scanf("%d", &alder);
	if (alder < 12)
		pris = 3145;
	else
		pris = 4295;
	printf("Pris %d kr", pris);

	return 0;
}