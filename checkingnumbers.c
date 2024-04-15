#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a");
    scanf("%d",&a);

    printf("Enter the value of b");
    scanf("%d",&b);

    if(a==b && b==a){
        printf("The numbers are equal");
    }
    else{
        printf("The numbers are not equal");
    }
    return 0;
}