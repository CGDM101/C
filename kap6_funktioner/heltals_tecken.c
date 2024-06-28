#include <stdio.h>

int tecken(int);

int main(){
	int tal;
	printf("Tal: ");
	scanf("%d", &tal);
	
	printf("Talets tecken: %d", tecken(tal));
	
	return 0;
}

int tecken(int tal){
	if (tal > 0)
		return 1;
	else if(tal == 0)
		return 0;
	else 
		return -1;

}