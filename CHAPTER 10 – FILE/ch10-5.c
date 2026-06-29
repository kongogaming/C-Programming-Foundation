#include <stdio.h>

int main(){
    char j;
    FILE* ptr;
    ptr=fopen("test.txt","r");
    while(1){
        j=fgetc(ptr);
        printf("%c", j);
        if(j==EOF){
            break;
        }
    }
    return 0;
}