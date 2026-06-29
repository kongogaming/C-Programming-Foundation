#include <stdio.h>

int main(){
    for(int i=10;i;i--){
        if(i==9){
            //printf("gay\n");
            continue;
        }
        printf("the value of i:%d\n", i);
        
    }
    return 0;
}