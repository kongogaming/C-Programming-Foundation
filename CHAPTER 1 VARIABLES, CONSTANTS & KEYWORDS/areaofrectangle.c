#include<stdio.h>
int main(){
    int length;
    int breadth;

    printf("input desired length:");
    scanf("%d", &length);
    printf("input desired breadth:");
    scanf("%d", &breadth);

    int area = length*breadth;
    printf("the area of the rectangle is:%d", area);
    return 0;
    
}