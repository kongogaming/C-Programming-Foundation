#include <stdio.h>

int main(){
    int a=10;
    printf("the value of a is %d\n", a);
    a=a+1;
    printf("the value of a is %d\n", a);
    a++;
    printf("the value of a is %d\n", a);
    a--;
    printf("the value of a is %d\n", a);
    printf("the value of a is %d\n", --a);
    printf("the value of a is %d\n", a++);
    printf("the value of a is %d\n", ++a);
    printf("the value of a is %d\n", --a);

    return 0;
}