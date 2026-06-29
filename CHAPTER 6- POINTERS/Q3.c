#include <stdio.h>
void changevalue(int*);
void changevalue(int* a){
    *a=*a*10;
}
int main(){
    int z=100;
    changevalue(&z);
    printf("the cahnged value of z is %d\n", z);
    return 0;
}