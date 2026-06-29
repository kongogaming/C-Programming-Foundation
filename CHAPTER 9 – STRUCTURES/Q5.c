#include <stdio.h>
struct complex{
    int real;
    int imag;
};
typedef struct complex comp;
void display(comp a){
    
    printf("the complex number is (%d+%di)\n",a.real,a.imag);
    
}
int main(){
    comp num[5];
    for (int i=0;i<5;i++){
        printf("enter the real and imaginary parts of complex number %d: ",i+1);
        scanf("%d \n %d",&num[i].real,&num[i].imag);
        display(num[i]);
    }
    /*for (int i=0;i<5;i++){
        printf("the %d complex number is (%d+%di)\n",num[i].real,num[i].imag);
    }*/
    return 0;
}