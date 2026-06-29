#include <stdio.h>

int main(){
    int a=1,b=0;
    printf("the value of a and b is %d\n", a&&b);
    printf("the value of a or b is %d\n", a||b);
    printf("the value of not(b) is %d\n", !b);

    if(a||b){
        printf("a or b is true\n");
    }
    else{
        printf("a and b is false\n");
    }
    return 0;
}