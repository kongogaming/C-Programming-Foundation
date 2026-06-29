#include <stdio.h>

int main(){
    int i=7;
    int* j= &i;
    int** k= &j;
    printf("the address of i is %p\n", &i);
    printf("the address of j is %p\n", &j);
    printf("the address of k is %p\n", &k);
    printf("the value of i is %d\n", *(&i));
    printf("the value of i is %d\n", **k);
    printf("the value of i is %d\n", *j);
    return 0;
}