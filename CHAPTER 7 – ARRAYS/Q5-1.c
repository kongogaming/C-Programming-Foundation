#include <stdio.h>
void printArray(int* a, int n);
void printArray(int* a, int n){
    for(int i=n-1;i>=0;i--){
        
        printf("%d\n",a[i]);
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    printArray(a, 5);
    return 0;
}