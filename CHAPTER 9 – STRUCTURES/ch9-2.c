#include <stdio.h>
#include <string.h>
struct employee{
    int id;
    float salary;
    char name[20];

};
int main(){
    struct employee facebook[100];
    facebook[0].id=1;
    facebook[1].id=2;
    strcpy(facebook[0].name,"suvam");
    strcpy(facebook[1].name,"somu");
    facebook[0].salary=1000;
    facebook[1].salary=2000;
    for(int i=0;i<2;i++){
        printf("employee name=%s id=%d salary=%f\n",facebook[i].name,facebook[i].id,facebook[i].salary);
    }
    struct employee poly={3,3000,"polly"};
    printf("employee name=%s id=%d salary=%f\n",poly.name,poly.id,poly.salary);
    
    struct employee e1={4,5000,"rahul"};
    struct employee *ptr;
    ptr=&e1;
    printf("%d\n",(*ptr).id);
    printf("%s\n",ptr->name);
    return 0;
}