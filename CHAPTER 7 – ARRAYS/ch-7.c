#include <stdio.h>

int main(){
    int marks[90];
    
    marks[0]=10;
    marks[1]=20;
    marks[91]=1000;
    printf("marks of 1 and 0 is %p %d", &marks[91], marks[1]);
    return 0;
}