#include <stdio.h>

int main(){
    int n=8;
    int s=0;
    int j=0;
    for(int i=1;i<=10;i++){
        s=n*i;
        j+=s;
    }
    printf("%d",j);
    return 0;
}