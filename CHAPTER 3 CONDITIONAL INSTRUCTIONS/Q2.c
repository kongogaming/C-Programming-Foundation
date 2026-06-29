#include <stdio.h>

int main(){
    float sub1,sub2,sub3;
    
    printf("input your marks for subject 1:");
    scanf("%f", &sub1);
    printf("input your marks for subject 2:");
    scanf("%f", &sub2);
    printf("input your marks for subject 3:");
    scanf("%f", &sub3);

    float total=sub1+sub2+sub3;
    float percentage=(total/300)*100;
    
    /*float percentage_of_subject1,percentage_of_subject2,percentage_of_subject3;
    percentage_of_subject1=(sub1/100)*100;
    percentage_of_subject2=(sub2/100)*100;
    percentage_of_subject3=(sub3/100)*100;
    */
    if (percentage>=40 && sub1>=33 && sub2>=33 && sub3>=33){
        printf("congratulation you have passed the exam");
    }
    else{
        printf("sorry you have failed the exam");
    }
    
    return 0;
}