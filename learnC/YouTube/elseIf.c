// app for menu at the doctor's office
// 1. add a patient
// 2. view a patient
// 3. search patients
// 4. exit menu

#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("Choose a menu option 1-4:\n");
    printf("1: Add a patient.\n");
    printf("2: View a patient.\n");
    printf("3: Search patients.\n");
    printf("4: Exit menu.\n");

    int input = 0;
    scanf("%d", &input);

    if(input == 1){
        printf("Option 1 was selected.\n");
    } else if(input == 2){
        printf("Option 2 was selected.\n");
    } else if(input == 3){
        printf("Option 3 was selected.\n");
    } else if(input == 4){
        printf("Option 4 was selected.\n");
    } else {
        printf("Option user selected is not available.\n");
    }

    return 0;
}