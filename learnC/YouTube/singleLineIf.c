#include <stdio.h>
#include <stdbool.h>

int main(){
    int score = 5;

    // for single line if statements, only the FIRST statement after the 
    // if statement is executed when the if statement is TRUE.
    if(false) 
        printf("TRUE!\n");
        score++;

    printf("%d\n", score);

    // common mistake in the C language with regards to single line
    // if statements is structure. For example:
    if(false); printf("True true true!\n");
    // the semicolon after the if(false) statement makes up the 
    // entirety of the if statement, meaning even if it is false, 
    // the print statement will be executed.
    return 0;
}