#include <stdio.h>
#include <string.h>
struct employee{
    int id;
    float salary;
    char name[20];

};
void show(struct employee a){
    printf("name: %s\n", a.name);
    printf("code: %d\n", a.id);
    printf("salary: %f\n", a.salary);
}
int main(){
    struct employee poly={3,3000,"polly"};
    show(poly);
    
    return 0;
}