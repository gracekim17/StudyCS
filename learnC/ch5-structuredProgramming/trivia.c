#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sportsQuestion(void);
int geographyQuestion(void);
int btsQuestion(void);
void pause(int);
int giResponse = 0;
int gCorrect = 0;
int gIncorrect = 0;

int main(){
    int count = 0;
    do {
        system("clear");
        printf("\n\tTHE TRIVIA GAME\n\n");
        printf("1\tSports\n");
        printf("2\tGeography\n");
        printf("3\tBTS\n");
        printf("4\tQuit\n");
        printf("\n\nEnter your selection: ");
        scanf("%d", &giResponse);

        switch(giResponse) {
            case 1:
                if(sportsQuestion() == 4){
                    gCorrect++;
                    printf("\nCorrect!\n");
                } else {
                    printf("\nIncorrect\n");
                    gIncorrect++;
                }
                pause(2);
                break;
            case 2:
                if(geographyQuestion() == 4){
                    gCorrect++;
                    printf("\nCorrect!\n");
                } else {
                    gIncorrect++;
                    printf("\nIncorrect\n");
                }
                pause(2);
                break;
            case 3:
                if(btsQuestion() == 3){
                    gCorrect++;
                    printf("\nCorrect!\n");
                }
                else{
                    gIncorrect++;
                    printf("\nIncorrect\n");
                }
                pause(2);
                break;
            case 4:
                printf("\n\tNumber correct: %d", gCorrect);
                printf("\n\tNumber incorrect: %d\n\n", gIncorrect);
                break;
        } 
    } while ( giResponse != 4);
}

int btsQuestion() {
    int iAnswer = 0;
    system("clear");
    printf("\tBTS Question\n");
    printf("\nWhat is one of Jimin's nicknames?");
    printf("\n\n1\tJimin Park\n");
    printf("2\tVVV\n");
    printf("3\tChim Chim\n");
    printf("4\tHope\n");
    printf("\nEnter your selection: ");
    scanf("%d", &iAnswer);
    return iAnswer;
}

int sportsQuestion(){
    int iAnswer = 0;
    system("clear");
    printf("\tSports Question\n");
    printf("\nWhat university did NFL star Deion Sanders attend? ");
    printf("\n\n1\t University of Miami\n");
    printf("2\tCalifornia State University\n");
    printf("3\tIndiana University\n");
    printf("4\tFlorida State University\n");
    printf("\nEnter your selection: ");
    scanf("%d", &iAnswer);
    return iAnswer;
}

int geographyQuestion(){
    int iAnswer = 0;
    system("clear");
    printf("\tGeography Question\n");
    printf("\nWhat is the capitol of Washington state? ");
    printf("\n\n1\tSeattle\n");
    printf("2\tRedmond\n");
    printf("3\tBellevue\n");
    printf("4\tOlympia\n");
    printf("\nEnter your selection: ");
    scanf("%d", &iAnswer);
    return iAnswer;
}

void pause(int t){
    int iCurrentTime = 0;
    int iElapsedTime = 0;
    iCurrentTime = time(NULL);
    do {
        iElapsedTime = time(NULL);
    } while ( (iElapsedTime - iCurrentTime) < t );
}