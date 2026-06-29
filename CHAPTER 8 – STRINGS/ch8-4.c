#include <stdio.h>
#include <string.h>

int main(){
    char a[]="loka loka poka soka";
    printf("%d \n", strlen(a));
    char b[20];
    strcpy(b,a);
    puts(b);
    char c[20]="tokatokalokapoka";
    char d[20]="sokasokalokapoka";
    strcat(d,c);
    puts(d);
    char e[20]="hijdu";
    char f[]="hijdu";

    printf("%d", strcmp(e,f));

    return 0;
}