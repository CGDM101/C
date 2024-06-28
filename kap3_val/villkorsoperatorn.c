int main()
{
	// Villkorsoperatorn bildar villkorsuttryck.
	 
	int max = (x>y) ? x : y;
	
	// I st f:
	if (x>y)
		max = x;
	else
		max = y;

	return 0;
}