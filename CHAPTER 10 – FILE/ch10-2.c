#include <stdio.h>

int main(){
    FILE* ptr;
    ptr=fopen("nigo.txt","r");

    int a;
    fscanf(ptr,"%d", &a);
    printf("%d", a);

    fclose(ptr);
    return 0;
}