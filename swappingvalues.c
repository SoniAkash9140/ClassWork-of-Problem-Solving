#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first value");
    scanf("%d",&a);

    printf("enter the second value");
    scanf("%d",&b);

    c=b;
    b=a;
    a=c;

    printf("The swap value of a is %d\n",a);
    printf("The swap value of b is %d \n",b);

    return 0;
}