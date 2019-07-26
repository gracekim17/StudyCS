// The user has to guss a number from 0-5.
// output whether or not the person is correct.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    // pseudo random number generator
    // basically a random number that's generated
    // based on some condition
    // it's seeded
    // seed for this example -- from the clock

    int maxValue = 5;
    srand(time(NULL));
    int randomNumber = rand();
    randomNumber %= (maxValue + 1);
    printf("The random number is: %i\n", randomNumber);
    
    int count = 0;
    int input;
    bool isMatch = false;
    while(isMatch == false){
        count++;
        printf("Guess a number from 0 - %i: ", maxValue);
        scanf("%i", &input);
        if(input == randomNumber){
            isMatch = true;
            printf("Congratulations! You guessed it after this many times: %i\n", count);
        } else {
            printf("Nope, not it. Try again.\n");
        }
    }

    return 0;
}