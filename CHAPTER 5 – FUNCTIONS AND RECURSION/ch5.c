#include <stdio.h>

int mul(int,int);
int mul(int a, int b){
    printf("your multiplied value is: %d\n", a*b);
    return a*b;
}
int sum(int,int);
int sum(int a, int b){
    printf("your sum value is:%d\n", a+b);
    return a+b;
}
int main(){
    
    mul(4,3);
    mul(5,6);
    sum(7,8);
    sum(9,10);
    return 0;
}