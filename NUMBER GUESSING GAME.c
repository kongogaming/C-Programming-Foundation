#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){     
    srand(time(0));
    int randomnumber=(rand()%100)+1;
    int guess;
    int numberofguesses=0;
    //printf("the random number is %d", randomnumber);
    do
    {
        printf("enter your guess between 1 and 100:\n");
        scanf("%d", &guess);
        if(guess>randomnumber){
            printf("lower number please\n");
        }
        else if(guess<randomnumber){
            printf("higher number please\n" );
        }
        numberofguesses++;
        printf("no of tries %d\n", numberofguesses);
    }while(guess!=randomnumber);
    
    printf("you guessed the right number %d in %d guesses\n", randomnumber, numberofguesses);



    return 0;

}
