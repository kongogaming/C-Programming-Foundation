#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=6;
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        printf("Enter value for ptr[%d];", i+1);
        scanf("%d", &ptr[i]);

    }
    for(int i=0;i<n;i++){
        printf("ptr[%d]=%d\n",i+1, ptr[i]);
    }
    return 0;
}