#include <stdio.h>

int main() {
    int x = 0;
    int age = 30;
    int *ptr = &age;
    printf("&age: %d\n", &age);
    printf("age: %d\n", age);
    printf("ptr: %d\n", ptr);
    printf("*ptr: %d\n", *ptr);
    printf("&ptr: %d\n", &ptr);
    return 0;
}