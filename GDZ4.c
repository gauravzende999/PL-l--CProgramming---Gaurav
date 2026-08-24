// Program (4): write c program to swap two numbers using a temporary variable.
//solution (2): User Defined values.
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("\n Enter first number :");
    scanf("%d", &a);
    printf("\n Enter second number :");
    scanf("%d", &b);
temp=a;
a=b;
b=temp;
printf("\n After Swapping: \n");
printf("\n First number=%d \n",a);
printf("\n second number=%d \n",b);
return 0;
}
