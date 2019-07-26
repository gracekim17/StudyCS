#include <stdio.h>

int main()
{
	float x = 50.0;

	printf("%f", x); //printf takes a double, meaning x is getting promoted as it is passed to printf() because printf accepts doubles

	return 0;
}
