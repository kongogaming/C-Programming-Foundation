#include <stdio.h>

int main(){
    int i=1;
    int s=0;
    for(i=1;i<=10;i++){
        s+=i;
    }
    printf("the sum of first 10 natural number is:%d", s);
    return 0;
}