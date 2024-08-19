#include <stdio.h>
#define N 20

int sok_storsta(double a[], int n);

int main(){
	printf("Antal mandat som ska fördelas: ");
	int antal_mandat;
	scanf("%d", &antal_mandat);
	
	// Läs in antal röster
	long int roster[N];	// Antal röster
	int n = 0;		// Räknare f antal partier
	while (n < N){
		printf("Antal röster for parti nr %d? ", n+1);
		if (scanf("%ld", &roster[n]) != 1)
			break;
		n++;	// Öka antalet partier med 1. 
	}


	// OBS tal[n] och mandat[n] i boken; VLA
	double tal[5];			// Jämförelsetal
	int mandat[500];		// Antal tilldelade mandat
int i;
	for (i = 0; i <n; i++){
		tal[i] = roster[i] / 1.2;	// Beräkna jämförelsetalen
		mandat[i] = 0;			// Nollställ antal mandat
	}

	while (antal_mandat > 0) {
		// Sök efter partiet med det största jämförelsetalet
		int p = sok_storsta(tal, n);
		mandat[p]++;		// Ge ett mandat till parti p
		antal_mandat--;		// Ett mandat mindre kvar
		// Beräkna ett nytt jämförelsetal för mandat för parti b.
		tal[p] = roster[p] / (2*mandat[p]+1);	
	}

	// Skriv ut resultat
	printf("Antal mandat:\n");
	for (i = 0;i<n;i++)
		printf("Parti nr %2d:%4d\n", i+1, mandat[i]);

	return 0;
}


int sok_storsta(double a[], int n){
	int s = 0;	// Index f hitills största värde
int i;
	for (i = 0; i<n;i++){		
		if (a[i]> a[s])
			s=i;	// Nytt största värde funnet
	}
	return s;
	
}