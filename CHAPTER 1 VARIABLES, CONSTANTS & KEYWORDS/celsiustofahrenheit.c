#include <stdio.h>

int main(){
    float c;
    printf("input temperature in celsius:");
    scanf("%f", &c);
    float f;
    f=(c*9/5)+32;
    printf("temperature in fahrenheit is: %f", f);
    return 0;
}