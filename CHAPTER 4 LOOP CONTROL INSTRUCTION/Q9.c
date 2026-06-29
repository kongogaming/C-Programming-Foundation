#include <stdio.h>

int main(){
    int p=1;
    int n=10;
    int i=1;
    while(i<=n){
        p=p*i;
        i++;
    }
    printf("%d", p);
    return 0;
}