#include <stdio.h>
int sum(int*,int*);
int sum(int* a,int* b){
    *a=20;
    printf("the answer is %d\n", *a+*b);
    return *a+*b;
}
int main(){
    //sum(10,20);//call by value
    int c=10;
    int z=90;
    printf("the answer is %d\n", sum(&c,&z));
    printf("the value of c is %d\n", c);
    return 0;
}