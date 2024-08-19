#include <stdio.h>
int main(){

	char dollar, pund;
	dollar = '$';
	pund = '£'; 

	printf("%c", dollar);
	printf("%c", pund); // ü om programtexten lagrad s UTF-8. £ lagras m >1 byte!

	return 0;
}