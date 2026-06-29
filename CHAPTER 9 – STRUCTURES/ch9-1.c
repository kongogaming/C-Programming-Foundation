#include <stdio.h>
#include <string.h>
struct employee{
    int id;
    float salary;
    char name[20];
};
int main(){
    struct employee emp1,emp2,emp3;
    printf("enter employee 1 id,salary and name\n");
    scanf("%d \n %f \n %s", &emp1.id,&emp1.salary,&emp1.name);
    printf("enter employee 2 id,salary and name\n");
    scanf("%d \n %f \n %s", &emp2.id,&emp2.salary,&emp2.name);
    
    printf("enter employee 3 id,salary and name\n");
    scanf("%d \n %f \n %s", &emp3.id, &emp3.salary, &emp3.name);
    printf("employee 1 id=%d,salary=%f,name=%s\n",emp1.id,emp1.salary,emp1.name);
    printf("employee 2 id=%d,salary=%f,name=%s\n",emp2.id,emp2.salary,emp2.name);
    printf("employee 3 id=%d,salary=%f,name=%s\n",emp3.id,emp3.salary,emp3.name);
    return 0;
}