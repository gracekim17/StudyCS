#include <stdio.h>

int main()
{
	int money = 25;
	int bill = 15;

	
	int totalPaid = money - -bill; //the subtraction sign in front of bill is the unary subtraction operator
	printf("The total amount you paid is: %i\n", totalPaid);
	printf("The cost of your bill is: %i\n", bill);	

	return 0;
}
