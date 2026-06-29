#include <stdio.h>
#include <string.h>
char* slice(char a[], int z, int b){
    char* ptr1=&a[z];
    char* ptr2=&a[b];
    
    a= ptr1;
    a[b]='\0';
    return a;

}
int main(){
    char a[]="poriroba bhai";
    printf("%s \n", slice(a,1,6));

    return 0;
}