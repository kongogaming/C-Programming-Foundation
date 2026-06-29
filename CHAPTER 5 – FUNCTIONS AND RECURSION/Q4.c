#include <stdio.h>
int fibocacci(int);

int fibocacci(int a){
    if(a==0){
        return 0;
    }
    else if(a==1 || a==2){
        return a-1;
    }
    return fibocacci(a-1)+fibocacci(a-2);
}
int main(){
    int n=5;
    printf("the fiboccacci series at position %d is:%d",n,fibocacci(n));
    return 0;
}