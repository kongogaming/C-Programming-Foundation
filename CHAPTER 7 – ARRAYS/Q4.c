#include <stdio.h>

int main(){
    int a[11];
    int input;
    printf("enter a number: ");
    scanf("%d", &input);
    for(int i=0;i<11;i++){
        a[i]=i*input;
    }
    for(int i=0;i<11;i++){
        printf("%d X %d = %d\n", input, i,a[i]);
    }
    return 0;
}