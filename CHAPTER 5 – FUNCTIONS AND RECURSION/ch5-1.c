#include <stdio.h>
void goodmorning(char[]);
void goodmorning(char name[]){
    printf("good morning, %s!\n", name);
}
void goodafternoon(char[]);
void goodafternoon(char name[]){
    printf("good afternoon, %s!\n", name);
}
void goodnight(char[]);
void goodnight(char name[]){
    printf("good night, %s!\n", name);
}
int main(){
    goodmorning("rahul");
    goodafternoon("pondi");
    goodnight("sundar");
    return 0;
}