#include <stdio.h>

int main(){
    int r,h;
    printf("input radius:");
    scanf("%d", &r);
    printf("input height:");
    scanf("%d", &h);

    float a;
    a=2*3.14*r*h + 2*3.14*r*r;
    printf("the area of the cylinder is %f of radius %d and height %d",a,r,h);
    
    return 0;
}