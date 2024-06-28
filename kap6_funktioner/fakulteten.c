#include <stdio.h>

int nfak(int n) {
	int res = n;
	int i;
	if (n > 0)
		for (i = n; i > 2; i--)
			res = res * (i-1);
	else
		return 1;
	return res;

	// FACIT:

	//int r = 1;
	//int i;
	//for (i = 2; i <= n; i++)
	//	r = r * i;
	//return r;
}


int main() {
	int talet, fakulteten;
	printf("Tal: ");
	scanf("%d", &talet);

	fakulteten = nfak(talet);
	printf("Fakulteten av %d är %d", talet, fakulteten);

	return 0;
}