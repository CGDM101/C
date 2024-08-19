double read_int(void) {
	int x;
	scanf("%d", &x);
	return x;
}

double read_double(void) {
	double x;
	scanf("%lf", &x);
	return x;
}

void new_lines(int n) {
	int i;
	for (i = 0; i <= n; i++)
		printf("\n");	
}
