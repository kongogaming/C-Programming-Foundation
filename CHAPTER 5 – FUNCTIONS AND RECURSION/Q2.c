#include <stdio.h>
float conv(float);
float conv(float t){
    return (t*9.0/5.0)+32;
}
int main(){
    float a=38.9;
    printf("the temperature in fahrenheit is %f\n",conv(a));
    return 0;
}