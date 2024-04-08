#include<stdio.h>
#include<math.h>
int main(){
    float r,area,perimeter;
    printf("Enter the Radius:");
    scanf("%f",&r);

    float pie=3.14;

    area=pie*r*r;
    printf("The area of circle is %f",area);

    perimeter=2*pie*r;
    printf("\nThe perimeter of circle is %f",perimeter);
    return 0;
}