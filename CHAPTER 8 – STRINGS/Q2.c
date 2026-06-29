#include <stdio.h>
//void length(char,int);
void length(char a[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]=='\0'){
            break;
        }
        count++;
    }
    printf("Length of the string is: %d\n", count);
}
int main(){
    char a[]="suva";
    length(a,6);
    return 0;
}