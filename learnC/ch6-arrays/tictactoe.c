#include <stdio.h>
#include <stdlib.h>

void displayBoard(void);
int verifySelection(int, int);
void checkForWin(void);

char gBoard[9];
char winner = ' ';
int currentPlayer = 0;

int main() {
    int squareNum = 0;

    for(int i = 0; i < 9; i++){
        gBoard[i] = ' ';
    }
    displayBoard();

    while(winner == ' '){
        if(currentPlayer == 0 || currentPlayer == 1){
            printf("Player X, enter the square number you want to put your move in: ");
            scanf("%d", &squareNum);
            if(verifySelection(squareNum, currentPlayer) == 1)
                currentPlayer = 1;
            else 
                currentPlayer = 2;
        } else {
            printf("\nPLAYER 0\n");
            printf("Enter an available square number (1-9): ");
            scanf("%d", &squareNum);
            if(verifySelection(squareNum, currentPlayer) == 1)
                currentPlayer = 2;
            else 
                currentPlayer = 1;
        }
        displayBoard();
        checkForWin();
    }
    return 0;
}

void displayBoard() {
    system("clear");
    printf("\n\t|\t|\n");
    printf("%c\t|%c\t|%c\n", gBoard[0], gBoard[1], gBoard[2]);
    printf("- - - - | - - - | - - - -\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", gBoard[3], gBoard[4], gBoard[5]);
    printf("- - - - | - - - | - - - -\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", gBoard[6], gBoard[7], gBoard[8]);
    printf("\n\n");
}

int verifySelection(int squareNum, int currentPlayer) {
    if(gBoard[squareNum - 1] == ' ' && (currentPlayer == 1 || currentPlayer == 0)){
        gBoard[squareNum - 1] = 'X';
        return 0;
    } else if(gBoard[squareNum - 1] == ' ' && currentPlayer == 2){
        gBoard[squareNum - 1] = 'O';
        return 0;
    } else
        return 1;
}

void checkForWin() {
    int catTotal = 0;

    if(gBoard[0] == 'X' && gBoard[1] == 'X' && gBoard[2] == 'X')
        winner = 'X';
    else if(gBoard[3] == 'X' && gBoard[4] == 'X' && gBoard[5] == 'X')
        winner = 'X';
    else if(gBoard[6] == 'X' && gBoard[7] == 'X' && gBoard[8] == 'X')
        winner = 'X';
    else if(gBoard[0] == 'X' && gBoard[4] == 'X' && gBoard[8] == 'X')
        winner = 'X';
    else if(gBoard[2] == 'X' && gBoard[4] == 'X' && gBoard[6] == 'X')
        winner = 'X';
    else if(gBoard[0] == 'X' && gBoard[3] == 'X' && gBoard[6] == 'X')
        winner = 'X';
    else if(gBoard[1] == 'X' && gBoard[4] == 'X' && gBoard[7] == 'X')
        winner = 'X';
    else if(gBoard[2] == 'X' && gBoard[5] == 'X' && gBoard[8] == 'X')
        winner = 'X';
    else if(gBoard[0] == 'O' && gBoard[1] == 'O' && gBoard[2] == 'O')
        winner = 'O';
    else if(gBoard[3] == 'O' && gBoard[4] == 'O' && gBoard[5] == 'O')
        winner = 'O';
    else if(gBoard[6] == 'O' && gBoard[7] == 'O' && gBoard[8] == 'O')
        winner = 'O';
    else if(gBoard[0] == 'O' && gBoard[4] == 'O' && gBoard[8] == 'O')
        winner = 'O';
    else if(gBoard[2] == 'O' && gBoard[4] == 'O' && gBoard[6] == 'O')
        winner = 'O';
    else if(gBoard[0] == 'O' && gBoard[3] == 'O' && gBoard[6] == 'O')
        winner = 'O';
    else if(gBoard[1] == 'O' && gBoard[4] == 'O' && gBoard[7] == 'O')
        winner = 'O';
    else if(gBoard[2] == 'O' && gBoard[5] == 'O' && gBoard[8] == 'O')
        winner = 'O';
    
    if(winner == 'X'){
        printf("\nPlayer X wins!\n");
        return;
    } 
    if(winner == 'O'){
        printf("\nPlayer O wins!\n");
        return;
    }

    for(int i = 0; i < 9; i++){
        if(gBoard[i] != ' ') catTotal++;
    }
    if(catTotal == 9){
        winner = 'C';
        printf("\nCAT Game!\n");
        return;
    }
}