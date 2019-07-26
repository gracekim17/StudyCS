#include <stdio.h>

int main()
{
	int pizzasToEat = 123;
	
// 	output is still 123 and not 124 because output is initailized as the value of pizzasToEat (123) BEFORE the increment to 124 happens.  
//	int output = pizzasToEat--;	
//	printf("Pizzas to Eat: %i\n", output);

	printf("Old value of pizzasToEat: %i\n", pizzasToEat);
	pizzasToEat += 100;
	printf("New value of pizzasToEat: %i\n", pizzasToEat);

	return 0;
}
