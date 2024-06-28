#include <stdio.h>

void draw_line(int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("_");
	printf("\n");
}

int main() {
	draw_line(5);
	
	return 0;
}