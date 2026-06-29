#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=5;
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        ptr[i]=i*100;
    }
    for(int i=0;i<n;i++){
        printf("ptr[%d]=%d\n",i+1 ,ptr[i]);
    }
    n=10;
    ptr=(int*)realloc(ptr,n*sizeof(int*));
        for(int i=0;i<n;i++){
        ptr[i]=i*100;
    }
    for(int i=0;i<n;i++){
        printf("ptr[%d]=%d\n",i+1 ,ptr[i]);
    }
    free(ptr);
    return 0;
}