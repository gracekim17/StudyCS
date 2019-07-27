#include <stdio.h>

int main() {
    int a[10];

    for(int i = 0; i < sizeof(a)/sizeof(int); i++){
        printf("Enter in a digit for position %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}