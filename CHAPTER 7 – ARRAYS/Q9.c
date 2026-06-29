#include <stdio.h>

int main(){
    int t[3][10];
    int x,y,z;

    printf("input the first multiple you want to calculate:");
    scanf("%d",&x);
    printf("input the second multiple you want to calculate:");
    scanf("%d",&y);
    printf("input the third multiple you want to calculate:");
    scanf("%d",&z);
    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
             if(i==0){
                t[i][j]=(j+1)*x;
             }
             else if(i==1){
                t[i][j]=(j+1)*y;
             }
             else if(i==2){
                t[i][j]=(j+1)*z;
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