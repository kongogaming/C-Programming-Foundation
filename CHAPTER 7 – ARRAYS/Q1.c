#include <stdio.h>

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int* ptr= &a[0];
    printf("%d\n", a[2]);
    //ptr+2;
    printf("%d", *(ptr+2));
    return 0;
}