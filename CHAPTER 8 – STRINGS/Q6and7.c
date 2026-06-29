#include <stdio.h>
char* encrypt(char a[]){
    for(int i=0;a[i]!='\0';i++){
        a[i]=a[i]+156;

    }
    return a;
}
char* decrypt(char a[]){
    for(int i=0;a[i]!='\0';i++){
        a[i]=a[i]-156;
    }
    return a;
}
int main(){
    char a[]="suvam";
    printf("%s\n", encrypt(a));

    printf("%s", decrypt(a));
    return 0;
}