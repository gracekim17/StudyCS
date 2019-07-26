#include <stdio.h>

int main()
{
	char ASCII;
	int numASCII;

	printf("Please enter a character: ");
	scanf("%c", &ASCII);
	printf("Your character as a character: %c\n", ASCII);
	printf("Your character as an integer: %i\n", ASCII);

	printf("Please enter an integer between 0 - 127: ");
	scanf("%i", &numASCII);
	printf("Your integer as an integer: %i\n", numASCII);
	printf("Your integer as a character: %c\n", numASCII);

	// Math with ASCII
	char mathz = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", mathz, mathz);

	return 0;
}
