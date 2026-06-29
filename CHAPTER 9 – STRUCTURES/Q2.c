#include <stdio.h>
struct vector{
    int x;
    int y;
    int k;
};
typedef struct vector vec;
int main(){
    vec v1,v2;
    v1.x=10;
    v1.y=20;
    v1.k=30;
    v2.x=90;
    v2.y=80;
    v2.k=70;
    printf("the sum of two vector is (%di+%dj+%dk)\n",v1.x+v2.x,v1.y+v2.y,v1.k+v2.k);
    return 0;
}