#include <stdio.h>

int main()
{
	char firstname[21];
	char lastname[21];	
	printf("please enter your name: ");
	scanf("%s%s", firstname, lastname);

	printf("hello %s %s!\n", firstname, lastname);
	return 0;
}
