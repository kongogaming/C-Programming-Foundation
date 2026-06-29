#include <stdio.h>
float avg(int,int,int);
float avg(int a,int b,int c){
    printf("the average of %d,%d,%d is %f\n", a, b, c, (a+b+c)/3.0);
    return (a+b+c)/3.0;
}
int main(){
    avg(96,69,55);
    return 0;
}