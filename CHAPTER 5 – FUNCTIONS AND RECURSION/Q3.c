#include <stdio.h>
float force(float);
float force(float mass){
    return mass*9.8;
}
int main(){
    float a=110.90;
    printf("the force acting on the object is: %.2f\n",force(a));
    return 0;
}