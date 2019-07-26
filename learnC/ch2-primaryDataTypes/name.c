#include <stdio.h>

int main(){
    char name;

    printf("Enter the one-letter name you wish for your character: ");
    scanf("%c", &name);

    printf("Here is your name: %c\n", name);

    return 0;
}