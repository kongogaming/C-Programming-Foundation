#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=10;
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int*));
    for (int i=0;i<n;i++){
        ptr[i]=7*(i+1);
        printf("7 X %d = %d\n",i+1,ptr[i]);
    }
    printf("After reallocating the memory\n");
    n=15;
    ptr=(int*)realloc(ptr,n*sizeof(int*));
    for (int i=0;i<n;i++){
        ptr[i]=7*(i+1);
        printf("7 X %d = %d\n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}