#include <stdio.h>

int main(){
    int n;
    printf("input a number:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("the value of natural number is:%d\n", i);
    }
    return 0;
}