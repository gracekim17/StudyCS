#include <stdio.h>

int main()
{
	int x, y;
	x = (y = 5);	// equivalent to y = 5; x = y; 

	printf("Address of y: %p\n   Value of y %i\n", &y, y); 
	printf("Address of i: %p\n   Value of x %i\n", &y, y); 

	int z = 20;
	y = 2;
	x =  -y + z;
	// printf("%i\n", x);

	return 0;
}
