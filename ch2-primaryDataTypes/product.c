#include <stdio.h>

int main(){
    int a, b, x, y;
    printf("\nInput an integer value for a: ");
    scanf("%i", &a);
    printf("Input an integer value for b: ");
    scanf("%i", &b);
    printf("Input an integer value for x: ");
    scanf("%i", &x);
    printf("Input an integer value for y: ");
    scanf("%i", &y);

    printf("\nThe total product of (a-b)*(x-y) is: %i\n\n", (a-b)*(x-y));

    return 0;
}