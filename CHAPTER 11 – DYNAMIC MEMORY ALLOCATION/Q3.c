#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=6;
    int* ptr;
    ptr=(int*)calloc(n,sizeof(int*));
    for(int i=0 ;i<n;i++){
        ptr[i]=i*10;
        printf("ptr[%d]=%d\n", i,ptr[i]);
    }
    return 0;
}