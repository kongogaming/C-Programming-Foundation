#include <stdio.h>

int main(){
    int income;
    printf("enter your income:");
    scanf("%d", &income);

    if (income>=250000 && income<500000){
        printf("at a income of %d you have to pay a tax of 5%% to the government which is equal to %f\n", income, income*(5.0/100.0));
    }
    else if (income>=500000 && income<1000000){
        printf("at a income of %d you have to pay a tax of 20%% to the government which is equal to %f\n", income, income*(20.0/100.0));
    }
    else if(income>=1000000){
        printf("at a income of %d you have to pay a tax of 30%% to the government which is equal to %f\n", income, income*(30.0/100.0));
    }
    else{
        printf("at this income of %d yours you dont qulify for any tax to the government\n", income);
    }
    
    return 0;
}