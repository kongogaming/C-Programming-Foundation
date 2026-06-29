#include <stdio.h>

int main(){
    int a=10;
    int* p= &a;
    char c='d';
    char* d= &c;
    printf("the address of a is %p\n", &a);
    printf("the value of p is %p\n", p);
    printf("the value at p is %d\n", *p);// to know the value of the assigned address
    printf("the value of address p is %d\n", *(&a));//another method to know the value of the assigned address
    printf("the address of p is %p\n", &p);
    printf("the address of c is %p\n",&c);
    printf("the value of d is %c\n", *d);
    printf("the address of d is %p\n", &d);
    printf("the value of c is %c\n", *(&c));

    return 0;
}   