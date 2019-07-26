#include <stdio.h>

int main()
{
	int eggs;

	printf("Please enter the number of eggs per day: ");
	
	// remember that for scanf, you must pass a reference variable, unless it's a char[] array
	scanf("%i", &eggs);

	double dozen = (double) eggs / 12;
	printf("The number of dozens of eggs: %f\n", dozen);

	return 0;
}
