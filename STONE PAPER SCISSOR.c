#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    int randomnumber=(rand()%3);
    int guess;
    while(1){
        printf("INPUT 0 for rock,1 for paper and 2 for scissors\n ");
        scanf("%d",&guess);
        if(guess==randomnumber){
            printf("draw please try again\n");
        }
        else if(guess==0 && randomnumber==1){
            printf("Computer chose paper, you lose! try again\n");
        }
        else if(guess==0 && randomnumber==2){
            printf("Computer chose scissors, you win!\n");
            break;
        }
        else if(guess==1 && randomnumber==0){
            printf("Computer chose rock, you win!\n");
            break;
        }
        else if(guess==1 && randomnumber==2){
            printf("Computer chose scissors, you lose! try again\n");
        }
        else if(guess==2 && randomnumber==0){
            printf("Computer chose rock, you lose! try again\n");
        }
        else if(guess==2 && randomnumber==1){
            printf("Computer chose paper, you win!\n");
            break;
        }
        else{
            printf("invalid input, please try again\n");
        }
    }
    return 0;
}