#include <stdio.h>
#include <string.h>
typedef struct employee{
    int id;
    float salary;
    char name[20];
}emp;
int main(){
    emp poly={3,3000,"polly"};
    emp ela;
    ela.id=2;
    ela.salary=100000;
    strcpy(ela.name,"ela");
    printf("employee name=%s id=%d salary=%f\n",ela.name,ela.id,ela.salary);
    return 0;
}