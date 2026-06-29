#include <stdio.h>

int main(){
    int a[10];
    for(int i=0;i<11;i++){
        a[i]=i*5;
    }
    for(int i=0;i<11;i++){
        printf("5 X %d = %d\n",i,a[i]);
    }
    return 0;
}