#include <stdio.h>
struct vector{
    int x;
    int y;
};
typedef struct vector vector;
int main(){
    vector v1,v2;
    v1.x=10;
    v1.y=20;
    v2.x=90;
    v2.y=80;
    printf("the value of vector is (%di,%dj)\n",v1.x,v1.y);
    printf("the value of vector is (%di,%dj)\n",v2.x,v2.y);
    return 0;
}