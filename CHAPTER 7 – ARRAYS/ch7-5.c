#include <stdio.h>

int main(){
    int mark[5];
    printf("Enter the marks of 5 students:\n");
   for(int i=0; i<5; i++){
    scanf("%d", &mark[i]);
   }
   for(int i=0; i<5; i++){
    printf("the address of students stored mark %d is %u\n",i, &mark[i]);
   }
   //method 1
   int* ptr = &mark[0];
   printf("%u\n", ptr);
   printf("values %d\n", *ptr);
   ptr++;
   printf("%u\n", ptr);
   printf("values %d\n", *ptr);
   ptr++;
   printf("%u\n", ptr);
   printf("values %d\n", *ptr);
   ptr++;
   printf("%u\n", ptr);
   printf("values %d\n", *ptr);
   ptr++;
   printf("%u\n", ptr);
   printf("values %d\n", *ptr);
   ptr++;
   printf("%u\n", ptr);
   printf("values %d\n", *ptr);
   //method 2 
   for(int i=0; i<5;i++){
    printf("the values of the pointer %d is %d\n", i, *ptr);
    ptr++;
   }
    return 0;
}