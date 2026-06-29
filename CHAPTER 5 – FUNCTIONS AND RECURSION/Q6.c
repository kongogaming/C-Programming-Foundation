#include <stdio.h>
int sum(int);
int sum(int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}
int main(){
    int n=5;
    printf("sum of first %d natural numbers is %d\n",n,sum(n));
    return 0;
}