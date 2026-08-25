// program(2): Write a program to calculate the area of a circle. 
//solution (2): User Defined values.
#include<stdio.h>
int main()
{
    float radius,area;
    printf("\n Enter the radius of a circle :");
    scanf("%f", &radius);
    area=(3.14*radius*radius);
    printf("\n Area of a circle =%f",area);
    return 0;
}

