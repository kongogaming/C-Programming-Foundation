#include <stdio.h>

int main(){
    //integer
    int a=5;
    int* ptr=&a;
    printf("the address of a is %d\n",&a);
    printf("the address of a is %u\n", ptr);
    ptr++;
    printf("the value of ptr is %u\n", ptr);

    //float
    float a1=5.0;
    float* ptr1=&a1;
    printf("the address of a1 is %u\n",&a1);
    printf("the address of a1 is %u\n", ptr1);
    ptr1++;
    printf("the value of ptr1 is %u\n", ptr1);

    //char
    char a2='A';
    char* ptr2=&a2;
    printf("the address of a2 is %u\n",&a2);
    printf("the address of a2 is %u\n", ptr2);
    ptr2++;
    printf("the value of ptr2 is %u\n", ptr2);

    return 0;
}