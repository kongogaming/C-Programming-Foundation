#include <stdio.h>

int main(){
    int p;
    float r,t;
    printf("input principle amount:");
    scanf("%d", &p);
    printf("input rate of interest:");
    scanf("%f", &r);
    printf("input time period in year format:");
    scanf("%f", &t);

    float s;
    s=(p*r*t)/100;
    printf("the total money accumulated for time period of %f at rate of intrest %f of principle amount of %d is %f",t,r,p,s);


    return 0;
}