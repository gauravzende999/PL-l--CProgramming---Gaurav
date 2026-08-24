//Program (1): Write a program to make use of basic I/O function using different data types.
//solution (2): User Defined values.
#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;
    printf("\n Enter student Roll Number:");
    scanf("%d",&rollnum);
    printf("\n Enter Student percentage:");
    scanf("%f", &per);
    printf("\n Enter Student Grade:");
    scanf("%c", &grade);
    printf("\n -----Student Information-----\n");
    printf("\n Roll Number is :%d", rollnum);
    printf("\n Percentage is :%f",per);
    printf("\n Grade :%c", grade);
    return 0;
}
