#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

int main(){
    srand(time(NULL));
    char iRand = (rand() % 8) + 2;
    char cGuess = '\0';
    int iGuess = 0;

    printf("Guess a number between 1 and 10, non-inclusive: ");
    scanf("%c", &cGuess);

    switch(cGuess){
        case '2':
            iGuess = 2;
            break;
        case '3':
            iGuess = 3;
            break;
        case '4':
            iGuess = 4;
            break;
        case '5':
            iGuess = 5;
            break;
        case '6':
            iGuess = 6;
            break;
        case '7':
            iGuess = 7;
            break;
        case '8':
            iGuess = 8;
            break;
        case '9':
            iGuess = 9;
            break;
    }

    // verify that the user input is a numerical digit between 1 and 10:
    if (isdigit(cGuess)){
        if(iGuess == iRand){
            printf("Congratulations. You guessed correctly!\n");
        } else {
            printf("Oops, wrong guess.\n");
            printf("The correct answer was: %i\n", iRand);
        }
    } else {
        printf("Bruh, enter a digit.\n");
    }

    return 0;
}