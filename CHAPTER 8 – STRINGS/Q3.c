#include <stdio.h>
#include <string.h>
char* slice(char a[], int a, int b){
    char* ptr1=&a[a];
    char* ptr2=&a[b];
    
    a= ptr1;
    a[n]='\0';
    return a;

}


int main(){
    char a[]="poriroba";
    printf("%s \n", slice(a,1,6));

    return 0;
}