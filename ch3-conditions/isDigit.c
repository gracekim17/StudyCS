#include <stdio.h>
#include <ctype.h>



int main(){
    char c = '\0';
    printf("Please enter a numerical digit: ");
    scanf("%c", &c);

    if (isdigit(c))
        printf("Thanks for entering a digit!\n");
    else 
        printf("You didn't enter a digit\n");

    return 0;
}