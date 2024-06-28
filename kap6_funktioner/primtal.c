#include <stdio.h>

_Bool primtal(int);


int main(){
	int talet;
	printf("Ditt tal: ");
	scanf("%d", &talet);
	if (primtal(talet))
		printf("Primtal.");
	else
		printf("Ej primtal.");
}


_Bool primtal(int talet) {
	int k;
	for(k = 2; k < talet; k++)
		if (talet % k == 0)
			return 0;
	return 1;
}

