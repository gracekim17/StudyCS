#include <stdio.h>

int main(){
    int x;
    printf("Enter a digit between 1-3: ");
    scanf("%i", &x);

    switch(x){
        case 1:
            printf("case 1\n");
            break;
        case 2:
            printf("case 2\n");
            break;
        case 3:
            printf("case 3\n");
            break;
        default:
            printf("oops invalid answer\n");
    }

    return 0;
}