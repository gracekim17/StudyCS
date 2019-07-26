#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lasti = 0, lastj = 0;

void goback(int x, int y){
    printf("\033[%dA", x);
    printf("\033[%dD", y);
}

void gotoxy(int x, int y){
    extern int lasti, lastj;
    goback(lasti, lastj);
    int i;
    for(i = 0; i < x; i++){
        printf("\n");
    }
    for(i = 0; i < y; i++){
        printf("\t");
    }
    lasti = x;
    lastj = y;
}

int size = 11;

void empty(){
    printf(" ");
}

void fill(){
    printf("a");
}

void clear(){
    extern int size;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < 50; j++){
            empty();
        }
        printf("\n");
    }
    goback(size, 0);
}

void paint(int data){
    extern int size;
    int middle = size / 2;
    for (int i = 0; i < size; i++){
        int blank = data;
        int offset = i - middle;
        if(offset < 0){
            offset *= -1;
        }
        blank = blank - offset;
        for(int j = 0; j<50; j++){
            if(j!= blank){
                if(j<blank){
                    fill();
                    continue;
                }
                empty();
                continue;
            }
            fill();
        }
        printf("\n");
    }
    goback(size, 0);
}

int main(){
    printf("\r\n");
    int data = 0;
    while(1){
        data += 1;
        if (data == 49){
            data = 0;
        }
        clear();
        struct timespec ts;
        int milliseconds = 50;
        ts.tv_sec = milliseconds / 1000;
        ts.tv_nsec = (milliseconds % 1000) * 1000000;
        paint(data);
        nanosleep(&ts, NULL);
    }
}