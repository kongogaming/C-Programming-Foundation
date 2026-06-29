#include <stdio.h>

int main(){
    int a;
    printf("input a number:");
    scanf("%d", &a);
    
    switch(a){
        case 90:
            printf("the entered number is greater than 90\n");
            break;
        case 80:
            printf("its less than 90\n");
            break;

        default:
            printf("error input only number\n");
        
    }

    return 0;
}