#include <stdio.h>
#include <stdbool.h>

bool printMessage();

int main(){
    bool test = (true || false) || printMessage();
    printf("The value of the boolean variable is: %d\n", test);

    return 0;
}

bool printMessage(){
    printf("Function call to printMessage() succeeded\n");

    return true;
}