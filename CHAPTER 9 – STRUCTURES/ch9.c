#include <stdio.h>
#include <string.h>
struct employee{
    int id;
    float salary;
    char name[20];
};
int main(){
    struct employee e1,e2;
    e1.id=1;
    e1.salary=50000.0;
    
    strcpy(e1.name,"sonu niggam");

    printf("employee of the month is %s with id %d and salary %.2f",e1.name,e1.id,e1.salary);

    return 0;
}