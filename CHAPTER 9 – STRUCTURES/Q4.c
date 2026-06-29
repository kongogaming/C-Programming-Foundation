#include <stdio.h>
struct complex{
    int real;
    int imag;
};
typedef struct complex comp;

int main(){
  
    comp c1={10,20};
    comp c2={30,20};
    printf("representing complex number is (%d+i%d)\n",c1.real,c1.imag);
    printf("representing complex number is (%d+i%d)\n",c2.real,c2.imag);
    return 0;
}