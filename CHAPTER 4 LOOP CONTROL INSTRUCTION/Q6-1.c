#include <stdio.h>

int main(){
    int i=1;
    int s=0;
    do{
        s+=i;
        i++;
    }while(i<=10);
    printf("Sum: %d", s);
    return 0;
}