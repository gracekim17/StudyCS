#include <stdio.h>

int main(){
    int year = 0;
    printf("Please enter your birth year: ");
    scanf("%i", &year);
    int zodiacIndex = year % 12;

    switch(zodiacIndex){
        case 0:
            printf("You are a monkey, and you are smart and curious.\n");
            break;
        case 1:
            printf("You are a rooster, and you are observant and hardworking.\n");
            break;
        case 2:
            printf("You are a dog, and you are lovely and honest.\n");
            break;
        case 3:
            printf("You are a pig, and you are compassionate and diligent.\n");
            break;
        case 4:
            printf("You are a rat, and you are resourceful and kind.\n");
            break;
        case 5: 
            printf("You are an ox, and you are strong and determined.\n");
            break;
        case 6:
            printf("You are a tiger, and you are brave and confident.\n");
            break;
        case 7:
            printf("You are a rabbit, and you are quiet and elegant.\n");
            break;
        case 8:
            printf("You are a dragon, and you are intelligent and enthusiastic.\n");
            break;
        case 9:
            printf("You are a snake, and you are enigmatic and wise.\n");
            break;
        case 10:
            printf("You are a horse, and you are animated and active.\n");
            break;
        case 11:
            printf("You are a goat, and you are calm and gentle.\n");
            break;
        default:
            printf("lmao wtf idek how this error could've been made.\n");
            break;
    }

    return 0;
}