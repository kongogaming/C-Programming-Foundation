#include <stdio.h>
struct student{
    char name[20];
    int roll;
    int class;
};
typedef struct student stud;

int main(){
    
    stud s1={"soumu",20,12};
    stud s2={"shreyas",21,12};
    stud* ptr1=&s1;
    stud* ptr2=&s2;
    printf("%s %d %d \n",ptr1->name,ptr1->roll,ptr1->class);
    printf("%s %d %d \n",ptr2->name,ptr2->roll,ptr2->class);
    return 0;
}