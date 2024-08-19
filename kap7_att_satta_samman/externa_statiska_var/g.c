static int a = 7;	// Definition av statisk variabel.

int g(void) {
	extern int b;	// Deklaration av extern variabel.
	return a + b;
}




