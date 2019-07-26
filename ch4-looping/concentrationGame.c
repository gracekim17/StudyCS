/*
The Concentration Game generates random numbers and displays them for a short period
for the user to memorize. While the random numbers are displayed, the player should 
try to memorize the numbers and their sequence. After a few seconds have passed, the
screen is cleared, and the user is asked to enter the memorized numbers in the correct
sequence.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char cYesNo = '\0';
    int iResp1 = 0;
    int iResp2 = 0;
    int iResp3 = 0;
    int iRand1 = 0;
    int iRand2 = 0;
    int iRand3 = 0;
    int iElapsedTime = 0;
    int iCurrentTime = 0;
    int iRandomNum = 0;
    int iCounter = 0;
    srand(time(NULL));

    printf("\nPlay a game of Concentration? (y or n): ");
    scanf("%c", &cYesNo);

    if(cYesNo == 'y' || cYesNo == 'Y'){
        iRand1 = rand() % 100;
        iRand2 = rand() % 100;
        iRand3 = rand() % 100;
        printf("\nConcentrate on the next three numbers\n");
        printf("\n%d\t%d\t%d\n", iRand1, iRand2, iRand3);
        iCurrentTime = time(NULL);
        do {
            iElapsedTime = time(NULL);
        } while (iElapsedTime - iCurrentTime < 3);
        system("clear");
        printf("\nEnter each # separated with one space: ");
        scanf("%d%d%d", &iResp1, &iResp2, &iResp3);
        if(iRand1 == iResp1 && iRand2 == iResp2 && iRand3 == iResp3){
            printf("\nCongratulations!\n");
        } else {
            printf("\nSorry, correct numbers were %d %d %d\n", iRand1, iRand2, iRand3);
        }
        return 0;
    }
}