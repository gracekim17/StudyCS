#include <stdio.h>

int findRemainder(int, int);
int largerNumber(int, int);
void printATMMenu(void);

int main() {
    int rem = findRemainder(96293, 23);
    printf("The remainder of 96293 / 23 is: %i\n", rem);
    int x = largerNumber(-98, -10);
    printf("The larger number is: %i\n", x);
    printATMMenu();
}

void printATMMenu(){
    printf("\n\n\tOkay here is the ATM Menu. woohoo.\n\n");
}

int largerNumber(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    } 
}

int findRemainder(int a, int b) {
    return a % b;
}