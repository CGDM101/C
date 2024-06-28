#include <stdio.h>

void new_lines(int n) {
	int i;
	for (i = 0; i <= n; i++)
		printf("\n");	

	// Returnsats behövs inte eftersom funktionen inte lämnar ngt värde!
	// Men man kan skriva "return;"
}


int main() {
	new_lines(3);
}