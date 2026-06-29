#include <stdio.h>

int main(){
    int r;
    printf("input radius:");
    scanf("%d", &r);
    
    printf("the area of the circle is %f of radius %d", 3.14*r*r , r);
    return 0;
}