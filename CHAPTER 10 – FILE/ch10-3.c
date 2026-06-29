#include <stdio.h>

int main(){
    FILE* ptr;

    ptr=fopen("nigo.txt","w");
    int a=100;
    fprintf(ptr,"%d", a);
    printf("succefully written to the file\n");
    fclose(ptr);
    return 0;
}