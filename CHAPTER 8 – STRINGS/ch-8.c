#include <stdio.h>

int main(){
    //char c[]={'a','b','c','d','\0'};
    int n=5;
    char c[]="suvam";
    for(int i=0; i<n;i++){
        printf("%c ",c[i]);
    }
    for(int i=0; i<n;i++){
        printf("%d \n ",&c[i]);
    }
    return 0;
}