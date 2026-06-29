#include <stdio.h>
char* copy(char a[], char b[]){
    char* ptr1=&a[0];
    char* ptr2=&b[0];
    while(*ptr1!='\0'){
        *ptr2=*ptr1;
        ptr2++;
        ptr1++;
        
    }
    *ptr2='\0';
    return b;
}
int main(){
    char b[]="suvam";
    char z[20];
    printf("%s", copy(b, z));
    return 0;
}