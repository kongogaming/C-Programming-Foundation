#include <stdio.h>
int returnaddress(int*);
int returnaddress(int *a){
    int* ptr= &a;
    printf("the address of a is %p\n", &ptr);
    return *ptr; 
}
int main(){
    int i=20;
    printf("the address of i is %p\n", &i);
    int* result=returnaddress(&i);
    printf("the address of result is %p\n", &result);
    return 0;
}