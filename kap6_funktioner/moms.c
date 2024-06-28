#include <stdio.h>

double pris(double pris, double moms);

int main(){
	printf("Priset inkl. moms: %.2f", pris(1500, 12));
	
	return 0;
}

double pris(double pris_exkl_moms, double moms_i_procent) {
	double pris_inkl_moms = pris_exkl_moms + pris_exkl_moms*moms_i_procent/100;
	return pris_inkl_moms;
}