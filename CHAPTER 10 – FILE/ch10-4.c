#include <stdio.h>

int main(){
    FILE* ptr;
    ptr=fopen("nigo.txt","w");
    /*char a=fgetc(ptr);
    printf("%c", a);
    */
   fputc( 'B', ptr);

   fclose(ptr);
    return 0;
}