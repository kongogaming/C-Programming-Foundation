#include <stdio.h>
int factorial(int);
int factorial(int a){
    if(a==1 || a==0){
        return 1;
    }
    return factorial(a-1)*a;
}
int main(){
    int a=2;
    printf("the factorial of %d is %d\n",a,factorial(a));
    return 0;
}