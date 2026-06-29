#include <stdio.h>
int lines(int);
int lines(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*i)+1;j++){
            printf("*");
        }
        printf("\n");
    }

}
int main(){
    int n=10;
    lines(n);
    return 0;
}