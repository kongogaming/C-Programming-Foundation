#include <stdio.h>

int main(){
    FILE* ptr;
    ptr=fopen("nigo.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    for (int i=0;i<10;i++){
        printf("%d X %d = %d\n",num,i+1,num*(i+1));
    }
    fclose(ptr);
    return 0;
}