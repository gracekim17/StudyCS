#include <stdio.h>

int main(){
    int beg = 0;
    int end = 0;
    int inc = 0;

    printf("Please enter the beginning number to start counting from, the ending number to stop counting at, and the increment number separated by a space: ");
    scanf("%d%d%d", &beg, &end, &inc);

    if(beg < end){
        for(int i = beg; i <= end; i+=inc){
            printf("%d ", i);
        }
        printf("\n");
    } else if(beg > end){
        for(int i = beg; i >= end; i-=inc){
            printf("%d ", i);
        }
        printf("\n");
    } else {
        printf("%d\n", beg);
    }
}