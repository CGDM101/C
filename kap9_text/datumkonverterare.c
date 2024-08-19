#include <stdio.h>
int main(){
	char a[9];
	char v[] = "20  -  -  ";
	printf("Ange ett datum som mm/dd/yy: ");
	scanf("%s", a);
	v[2]=a[6]; v[3]=a[7];	// år
	v[5]=a[0]; v[6]=a[1];	// mån
	v[8]=a[3]; v[9]=a[4];	// dag
	printf("Svenskt datum: %s", v);

	return 0;
}