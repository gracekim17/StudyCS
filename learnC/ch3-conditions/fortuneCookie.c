#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int iRand = (rand() % 4) + 1;

    printf("\nFortune Cookie mini project for chapter 3!\n");

    switch(iRand){
        case 1:
            printf("\nYou will meet a new friend today.\n");
            break;
        case 2:
            printf("\nYou will enjoy a long and happy life.\n");
            break;
        case 3:
            printf("\nOpportunity knocks softly. Can you hear it?\n");
            break;
        case 4: 
            printf("\nYou'll be financially rewarded for your good deeds.\n");
            break;
    }

    printf("\nHere are your lucky numbers for the lottery: ");
    printf("%d ", (rand() % 49) + 1);
    printf("%d ", (rand() % 49) + 1);
    printf("%d ", (rand() % 49) + 1);
    printf("%d ", (rand() % 49) + 1);
    printf("%d ", (rand() % 49) + 1);
    printf("%d \n\n", (rand() % 49) + 1);

    return 0;
}