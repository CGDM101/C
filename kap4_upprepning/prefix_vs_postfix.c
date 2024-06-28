int main() {
	
	// I for spelar det ingen roll, men i sammansatta uttryck spelar det roll.

	int i,k,m,n;
	i =4;k=7;
	
	// PREFIX:

	n = ++1 * --k; // n får värdet 5*6, dvs. 30

	// POSTFIX:

	m = i++ * k--; // m får värdet 4*7, dvs. 28
	
	// Med prefix är det NYA värdet.
	// Med postfix är det GAMLA värdet.



	// WHILE MED POSTFIX:
	
	// I stället för:
	while(k <= n) {
		summa = summa + k; 	// Öka summa med k
		k = k + 1;		// Öka k med 1
	}

	// ...så:
	while(k <= n) 
		summa = summa + k++;	// Öka summa med k och k med 1

	// Här både avläser man och ändrar räknaren på samma gång.



	return 0;
}