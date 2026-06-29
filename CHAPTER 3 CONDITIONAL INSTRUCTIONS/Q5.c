#include <stdio.h>

int main(){
    char ch;
    printf(" enter a character:");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z'){
        printf(" the entered character which is %c is a lowercase character", ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("the entered character which is %c is an not lowercase character", ch);
    }
    else{
        printf("invalid input");
    }
    
    return 0;
}