#include <stdio.h>

int main(){
    char j;
    FILE* ptr;
    FILE* ptr1;
    ptr1=fopen("test2.txt","w");
    ptr=fopen("test.txt","r");
    while(1){
        if(j == EOF){
            break;
        }
        else{
            j = fgetc(ptr);
            fprintf(ptr1,"%c", j);
            fprintf(ptr1,"%c", j);
            printf("%c", j);
        }
    }
    fclose(ptr);
    fclose(ptr1);
    return 0;
}