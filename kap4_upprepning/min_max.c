#include <stdio.h>
#include <limits.h>

int main() {
	int tal, min=INT_MAX, max=INT_MIN;
	while(1) {
		printf("Ditt tal: (Markera EOF för att avsluta.) ");
		if (scanf("%d", &tal) != 1)
			break;
		if (tal < min)
			min = tal;
		if (tal > max)
			max = tal;
	}
	printf("Max %d\nMin %d", max, min);
	

	return 0;
}