#include <stdio.h>
#include <stdbool.h>

int main(){
    int temp;
    printf("Are you hungry? (1 is true, 0 is false) ");
    scanf("%d", &temp);
    bool isHungry = temp;
    
    if(isHungry && temp == 1){
        printf("Here is some food.\n");
    }

    return 0;
} 