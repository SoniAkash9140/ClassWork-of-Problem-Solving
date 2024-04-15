#include<stdio.h>
int main(){
    int day,month,days;
    printf("Enter the value of days");
    scanf("%d",&day);

    month=day/30;
    days=day%30;

    printf("%d months and %d days",month,days);

    return 0;
}
