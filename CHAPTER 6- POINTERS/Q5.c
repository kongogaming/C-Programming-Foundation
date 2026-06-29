#include <stdio.h>
int sumandavg(int*,int*);
int sumandavg(int*a,int*b){
    int sum=*a+*b;
    int avg=sum/2;
    printf("the sum is %d and the avg is %d\n", sum,avg);
    return sum,avg;
}
int main(){
    int c=4,z=6;
    sumandavg(&c,&z);
    printf("the changed value of c is sum and z is avg which are %d and %d\n", c,z);
    return 0;
}