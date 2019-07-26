#include <stdio.h>

int main() 
{
	int radius;
	
	printf("Please enter a radius: ");
	scanf("%i", &radius);	//address of operator

	double area = 3.14159 * (radius * radius); 	
	printf("The area of the circle is: %f\n", area);
	return 0;
}
