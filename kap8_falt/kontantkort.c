#include <stdio.h>
int main(){

	// Läs in fältstorlek och skapa fältet.
	int n;
	printf("Hur mång typer av kontantkort? ");
	scanf("%d", &n);
	
	//double pris[n]; 	// OBS detta funkar inte; VLA
	// Eller så byter man n här mot en siffra som är onödigt stor...


	// LÖSNING:
	// Dynamically allocate memory for the pris array
    	double* pris = (double*)malloc(n * sizeof(double));
    	if (pris == NULL) {
        	fprintf(stderr, "Memory allocation failed!\n");
        	return 1; // Return an error code
    	}



	// Läs in priser
	int i;
	for (i = 0; i <n; i++) {
		printf("Pris/min för kort nr %d?", i+1);
		scanf("%lf", &pris[i]);
	}

	// Beräkna det lägsta priset
	int billigast = 0;	// Index för billigaste
	i=1;
	for (i; i <n; i++){
		if(pris[i] < pris[billigast])
		billigast = i;	// Nytt lägsta pris funnet
	}

	printf("\nKort nr %d är billigast.\n", billigast+1);
	printf("Kostnad: %4.2f kr/minut", pris[billigast]);


	// Free the dynamically allocated memory **********
    	free(pris);


	return 0;
}




// Mer:

/*


the size of the array pris is determined at runtime, which is not supported in certain contexts in C. Specifically, the use of variable-length arrays (VLAs) in global scope or within structures/unions is prohibited by the C standard. This restriction exists because VLAs can lead to stack overflow if the size exceeds the stack limit, and their size needs to be known at compile-time for efficient memory management.

To resolve this issue, you can dynamically allocate memory for the array using malloc or calloc. This approach allows you to specify the size of the array at runtime, thus avoiding the problem of having an unknown size. After using dynamic memory allocation, remember to free the allocated memory using free when it's no longer needed to prevent memory leaks.




Key Points Considered:

- Dynamic Memory Allocation: Used malloc to allocate memory for the pris array at runtime, allowing for a variable size.
- Error Handling: Checked if malloc successfully allocated memory and handled the case where it fails.
- Memory Management: Freed the allocated memory with free to prevent memory leaks.

This approach ensures that your program can handle arrays of sizes determined at runtime without violating the C standard's restrictions on variable-length arrays.



*/