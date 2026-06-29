#include <stdio.h>

int main(){
    char c[6];
    scanf("%s", &c);
    printf("%s \n", c);
    char z[6];
    for(int i=0; i<5;i++){
        scanf("%c", &z[i]);
        fflush(stdin);
    }
    z[5]='\0';
    for(int i=0; i<5;i++){
        printf("%c", z[i]);
    }
    return 0;
}