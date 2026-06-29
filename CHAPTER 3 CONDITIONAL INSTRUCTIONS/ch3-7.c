#include <stdio.h>

int main(){
    int a;
    printf("enter your result to know your grade:");
    scanf("%d", &a);

    if(a>=90){
        printf("you have secured A grade");
    }

    else if(a>=80){
        printf("you have secured B grade");
    }
    else if(a>=70){
        printf("you have secured c grade");
    }
    else if(a>=60){
        printf("you have scored D grade");
    }
    else if(a>=50){
        printf("you have secured E grade");
    }
    else if(a<50){
        printf("you have secured F grade");
    }
    else{
        printf("error only input numbers");
    }
    return 0;
}