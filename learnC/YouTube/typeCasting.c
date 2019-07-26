#include <stdio.h>

int main()
{
	int slices = 17;
	double halfPizza = (double) slices / 2;
	printf("%f\n", halfPizza);

	double c = 25/2 * 2;
	double d = 25/2 * 2.0;

	printf("c: %f\n", c);	
	printf("d: %f\n", d);	

	return 0;
}
