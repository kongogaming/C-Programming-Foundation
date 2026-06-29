#include <stdio.h>

int main(){
    int age;
    printf("input your age:");
    scanf("%d", &age);
    if(age>60){
        printf("old hag you can drive");
    }
    else if(age>18){
        printf("you can drive");
    }
    else{
        printf("fucking kid you can't drive");
    }
 
    return 0;
}

