#include <stdio.h>
struct dates{
    int day;
    int months;
    int year;

};
typedef struct dates dt;
int compare(dt d1,dt d2){
    if(d1.year==d2.year && d1.months==d2.months && d1.day==d2.day){
        return 0;
    }
    else if(d1.year>d2.year){
        return 1;
    }
    else if(d1.months>d2.months){
        return 1;
    }
    else if(d1.day>d2.day){
        return 1;
    }
    else if(d1.year<d2.year){
        return -1;
    }
    else if(d1.months<d2.months){
        return 1;
    }
    else if(d1.day<d2.day){
        return -1;
    }
}
int main(){
    dt july={4,7,2023};
    dt december={10,12,2007};
    printf("the date is %d/%d/%d\n",july.day,july.months,july.year);
    printf("the date is %d/%d/%d",december.day,december.months,december.year);
    printf("the bigger date is %d", compare(july,december));

    return 0;
}