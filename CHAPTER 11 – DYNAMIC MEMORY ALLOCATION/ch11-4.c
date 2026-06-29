#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int));
    ptr[0]=10;
    ptr[1]=20;
    ptr=(int*)realloc(ptr, 10*sizeof(int));
    return 0;
}