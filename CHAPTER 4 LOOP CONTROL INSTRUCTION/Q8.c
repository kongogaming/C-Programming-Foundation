#include <stdio.h>

int main(){
    int p=1;
    int n=10;
    for(int i=1; i<=n;i++){
        p=p*i;
    }
    printf("%d", p);
    return 0;
}