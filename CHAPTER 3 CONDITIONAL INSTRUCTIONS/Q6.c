#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("enter any 4 numbers:");
    scanf("%d", &a);
    printf("enter any 4 numbers:");
    scanf("%d", &b);
    printf("enter any 4 numbers:");
    scanf("%d", &c);
    printf("enter any 4 numbers:");
    scanf("%d", &d);

    if(a>b && a>c && a>d){
        printf("%d is the greatest number",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is the greatest number",b);
    }
    else if(c>a && c>b && c>d){
        printf("%d is the greatest number",c);
    }
    else if(d>b && d>c && d>a){
        printf("%d is the greatest number",d);
    }
    else{
        printf("all numbers are equal");
    }
    return 0;
} 