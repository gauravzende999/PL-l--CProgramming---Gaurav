#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3,total;
float average;
clrscr();
printf("Enter first number :");
scanf("%d", &num1);
printf("\n Enter second number :");
scanf("%d", &num2);
printf("\n Enter third number :");
scanf("%d", &num3);
total=(num1+num2+num3);
average=total/3;
printf("\n Average = %f", average);
getch();
}
