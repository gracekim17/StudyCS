#include <stdio.h>
#include <pthread.h>
#include <curses.h>

char ch = '*';

/*thread function definition*/
void* threadFunction(void* args)
{
    while(1)
    {
        ch = getch();
        printf("thread function called\n");
    }
}
int main()
{
    /*creating thread id*/
    pthread_t id;
    int ret;
  
    /*creating thread*/
    ret=pthread_create(&id,NULL,&threadFunction,NULL);
    
    if(ret==0){
        printf("Thread created successfully.\n");
    }
    else{
        printf("Thread not created.\n");
        return 0; /*return from main*/
    }
  
    while(1)
    {
      printf("%c\n", ch);      
    }
  
    return 0;
}