#include <stdio.h>

int main(){
    int t[3][10];
    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
             if(i==0){
                t[i][j]=(j+1)*2;
             }
             else if(i==1){
                t[i][j]=(j+1)*7;
             }
             else if(i==2){
                t[i][j]=(j+1)*9;
             }
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            printf("the value of t[%d][%d]=%d\n",i,j,t[i][j]);
        }
        printf("\n");
    }
    return 0;
}