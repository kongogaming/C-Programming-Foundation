#include <stdio.h>
void check(int a[],int s);
void check(int a[],int s){
    int b=0;
    for(int i=0;i<s;i++){
        if(a[i]>0 || a[i]==0){
            b++;
        }
    }
    printf("no of positive numbers:%d\n",b);
}
int main(){
    int a[]={-5,-7,-8,-10};
    check(a,4);
    return 0;
}