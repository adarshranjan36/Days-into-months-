//wap to convert total number of days into months and number of days
#include<stdio.h>
int main(){
    int  months , weak , days;
    printf("enter the number of days");
    scanf("%d",&days);
    months=(days/30);
    weak=(days%30)/7;
    days= (days%30%7);
    printf( "%d monts %d weak %d days ",months,weak,days);
    return 0;
}


