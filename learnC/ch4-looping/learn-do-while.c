#include <stdio.h>

int main(){
    int x = 0;
    while(x < 11){
        printf("%i x is still less than 11\n", x);
        x++;
    }

    do {
        printf("No matter what, I will be called once.\n");
    } while (x < 10);
}