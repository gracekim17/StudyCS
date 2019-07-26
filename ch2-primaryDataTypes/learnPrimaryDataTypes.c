#include <stdio.h>

int main(){
    float x = 3.123456, y = 10.131995;
    printf("%.1f\n", x);
    printf("%.2f\n", x);
    printf("%.3f\n", x);
    printf("%.4f\n", x);
    printf("%.5f\n", x);
    printf("%.6f\n", x);
    printf("%f\n", y);

    // remember to capitalize all letters of variable names for constants
    const int WEEKS = 20;
    const float PI = 3.14;

    return 0;
}