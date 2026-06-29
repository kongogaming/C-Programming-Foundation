#include <stdio.h>

int main(){
    FILE* p1;
    p1=fopen("nigo2.txt","r");
    if(p1==NULL){
        printf("the file doesn't exist");
        return 0;
    }
    else{
        int num;
        fscanf(p1,"%d",&num);
        printf("%d", num);
    }
    return 0;
}