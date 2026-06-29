#include <stdio.h>
void changevalue(int);
void changevalue(int a){
    a=a*10;
    printf("the changed value is %d\n", a);

}
int main(){
    int z=100;
    changevalue(z);
    printf("the changed value of z is %d\n", z);
    return 0;
}