#include <stdio.h>

struct employee{
    char name[20];
    float salary;
};
int main(){
    FILE* ptr;
   
    struct employee emp1;
    printf("Enter name of employee 1:\n");
    scanf("%s",emp1.name);
    printf("Enter salary of employee 1:\n");
    scanf("%f",&emp1.salary);
    struct employee emp2={"rishi",6000.00};
    printf("Enter name of employee 2:\n");
    scanf("%s",emp2.name);
    printf("Enter salary of employee 2:\n");
    scanf("%f",&emp2.salary);
    ptr=fopen("employee.txt","a");
    fprintf(ptr,"%s %f\n",emp1.name,emp1.salary);
    fprintf(ptr,"%s %f\n",emp2.name,emp2.salary);
    fclose(ptr);

    return 0;
}