#include <stdio.h>

int main(){
    /*
    int i;
    do{
        printf("I am enjoying in loop\n");
        printf("Press 0 or 1: ");
        scanf("%i", &i);
    } while(i == 1);
    */
    int exit = 0;
    do{
        printf("Insert a character: ");
        char c = getchar();
        
        char ch;
        while((ch = getchar()) != '\n' && ch != EOF){
            printf("You pressed %c", ch);
        }

        if(c == 'h'){
            printf("You inserted an h.\n");
        } else {
            exit = 1;
            printf("Exiting with value %c...\n", c);
        }
    } while(exit == 0);

    return 0;
}