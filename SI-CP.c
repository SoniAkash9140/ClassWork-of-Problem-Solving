#include<stdio.h>
#include<math.h>
int main(){
    float amount,p , r , t ,SI,CP;
    printf("Enter the value of amount:");
    scanf("%f",&amount);
    printf("Enter the value of p:");
    scanf("%f",&p);
    printf("Enter the value of r:");
    scanf("%f",&r);
    printf("Enter the value of t:");
    scanf("%f",&t);

    SI=p*r*t/100;
    printf("The simple interest is %f",SI);

    CP=p*pow(1+r/100,t);
    printf("\nThe Compound Interest is %f",CP);
    return 0;
}