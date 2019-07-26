#include <stdio.h>
#include <math.h>

int main(){
    /*
    // asking for triangle side lengths one at a time
    double a, b;
    
    printf("Enter the length of the first side: ");
    scanf("%lf", &a);
    printf("Enter the length of the second side: ");
    scanf("%lf", &b);
    */

    // asking for both triangle side lengths at the same time
    double a, b;
    printf("Two sides of the right triangle separated by a comma: ");
    scanf("%lf,%lf", &a, &b);

    double hypotenuse = sqrt(pow(a, 2.0) + pow(b, 2.0));
    printf("The length of the hypotenuse is: %lf\n", hypotenuse);

    return 0;
}