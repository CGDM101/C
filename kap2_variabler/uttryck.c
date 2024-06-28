#include <stdio.h>
int main()
{
	int langd, bredd;
	printf("Rektangellängd och -bredd: ");
	scanf("%d%d", &langd, &bredd);
	printf("Summan av längderna: %d och rektangelns area: %d", langd + langd, bredd * langd);

	return 0;
}