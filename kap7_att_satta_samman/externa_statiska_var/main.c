#include <stdio.h>

int f(void);	// Funktionsdeklaration
int g(void);	// Funktionsdeklaration

int a = 1;	// Definition av extern variabel
int b;		// Def av extern var initierad till 0 

int main() {
	printf("f()=%d\n", f());	// f()=2
	printf("f()=%d\n", f());	// f()=3
	printf("g()=%d\n", g());	// g()=7

	return 0;
}

