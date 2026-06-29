#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    float* ptr;
    scanf("%d", &n);
    ptr=(float*)malloc(n*sizeof(float));
    for(int i=0;i<n;i++){
        ptr[i]=i*1.1;
        printf("%.2f\n", ptr[i]);
    }
    
    return 0;
}