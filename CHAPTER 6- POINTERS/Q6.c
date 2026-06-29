#include <stdio.h>

int main(){
    int i=20;
    int* ptr1=&i;
    int** ptr2=&ptr1;
    printf("the value of i is %d\n", **ptr2);
    printf("the value of i is %d\n", *ptr1);
    printf("the value of i is %d\n", *(&i));
    printf("the address of i is %p\n", &i);
    printf("the address of ptr1 is %p\n", &ptr1);
    printf("the address of ptr2 is %p\n", &ptr2);
    return 0;
}