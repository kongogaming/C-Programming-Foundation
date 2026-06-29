#include <stdio.h>
#include <string.h>
int main(){
    char a='z';
    int count=0;
    char b[]="Nfsb!tbbsb!qbjtb!ubljzf!lf!offdif!cmbd1!qpmzf!ibj";
    for(int i=0;i<strlen(b);i++){
        if(b[i]==a){
            count++;
        }
    }
    printf("the number of %c is: %d", a, count);
    return 0;
}