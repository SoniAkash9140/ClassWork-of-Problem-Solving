#include<stdio.h>
int main(){
    int a,b,c,d,e;
    int sum;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Enter the value of c:");
    scanf("%d",&c);

    printf("Enter the value of d:");
    scanf("%d",&d);

    printf("Enter the value of e:");
    scanf("%d",&e);

    sum=a+b+c+d+e;
    float p=sum/5;
    printf("the sum if %d",sum);
    printf("\npercentage is %2lf",p);
    return 0;
}