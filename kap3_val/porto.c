#include <stdio.h>
int main()
{
	printf("Längd: ");
	int langd;	
	scanf("%d", &langd);
	printf("Bredd: ");
	int bredd;	
	scanf("%d", &bredd);
	int tjocklek;	
	printf("Tjocklek: ");
	scanf("%d", &tjocklek);
	
	if(langd < 600 && langd > 140 && bredd > 90 && tjocklek < 100 && bredd+langd+tjocklek < 900)  
		printf("Måtten OK.");
	else
		printf("Felaktiga mått.");

	return 0;
}