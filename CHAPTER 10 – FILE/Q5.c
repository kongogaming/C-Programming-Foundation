#include <stdio.h>

int main(){
    FILE* p1;
    p1=fopen("nigo.txt","r");
    int num;
    num=fgetc(p1);
    int dou = num*2;
    p1=fopen("nigo.txt","w");
    fprintf(p1,"%d", dou);
    fclose(p1);
    return 0;
}