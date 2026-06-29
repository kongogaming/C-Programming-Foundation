#include <stdio.h>
void swap(int*,int*);
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=100,z=90;
    swap(&x,&z);
    printf("the value of x and z is %d and %d\n", x,z);

    return 0;
}