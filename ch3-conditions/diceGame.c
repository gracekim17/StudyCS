#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int sum = dice1 + dice2;

    printf("This is a dice game, where if the sum of the face of the die is 7 or 11, you win!\n");

    if(sum == 7 || sum == 11)
        printf("You won because the sum was: %i\n", sum);
    else 
        printf("Aw man, you didn't win because the die sum was: %i\n", sum);

    return 0;
}