#include <stdio.h>

int main()
{
	int piecesPizza = 5;
	int numEaters = 2;
	int leftOver = piecesPizza % numEaters;

	printf("The number pieces of left over is %i\n", leftOver);
	return 0;
}
