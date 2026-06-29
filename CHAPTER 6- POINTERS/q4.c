#include <stdio.h>
void valuechange(int*);
void valuechange(int*a){
    *a=10;
}
int main(){
    int z=100;
    printf("the value of z is %d\n", z);
    valuechange(&z);
    printf("the changed value of z is %d\n", z);
    return 0;
}