#include <stdio.h>

int main(){
    int mark[5];
   /*scanf("%d", &mark[0]);
    scanf("%d", &mark[1]);
    scanf("%d", &mark[2]);
    scanf("%d", &mark[3]);
    scanf("%d", &mark[4]);
    */
   for(int i=0; i<5; i++){
    scanf("%d", &mark[i]);
   }
   for(int i=0; i<5; i++){
    printf("the mark of students %d is %d\n",i, mark[i]);
   }
    return 0;
}