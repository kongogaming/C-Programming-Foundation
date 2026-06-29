#include <stdio.h>

int main(){
    int n;
    printf("input how many number you want to know:");
    scanf("%d", &n);
    int i=0;
    do{
        printf("the value of first %d natural numbers are:%d\n", n, ++i);
    } while(i<n);
    return 0;
}