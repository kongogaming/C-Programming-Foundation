#include <stdio.h>

int main(){
    FILE* p1;
    p1=fopen("nigo.txt","a");
    p1=fopen("nigo.txt","r");
    int num;
    fscanf(p1,"%d",&num);
    printf("%d ",num);
    fscanf(p1,"%d",&num);
    printf("%d ",num);
    fscanf(p1,"%d",&num);
    printf("%d",num);
    return 0;
}