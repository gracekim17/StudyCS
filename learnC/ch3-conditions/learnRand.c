#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int rand();

int main(){
    int iRand = 0;
    int iResp = 0;
    srand(time(NULL));
    iRand = (rand() % 10) + 1;

    printf("Guess a number between 1 and 10: ");
    scanf("%d", &iResp);

    if(iResp == iRand)
        printf("Nice you guessed right.\n");
    else 
        printf("Oops sorry not sorry you guessed wrong. \nThe correct answer was: %i\n", iRand);

    return 0;
}