#include <stdio.h>

int main(){
    float a=10.1;
    float* j=&a;
    printf("the value of a is %f\n",*j);
    printf("the address of a is %p\n", &a);
    printf("the value of j is %f\n", *(&a));
    return 0;
}