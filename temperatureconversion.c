#include<stdio.h>
int main(){
    float celsius , fahrenhite ;
    
    printf("Enter temp. in celsius");
    scanf("%f",&celsius);

    fahrenhite=(celsius*9/5)+32;

    printf("%.2f celsius is equal to %.2f fahrenhite \n",celsius,fahrenhite);
    return 0;
}