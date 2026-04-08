/* Write a program in C to calculate the power of any number using recursion. 

Test Data :

Input the base value : 2

Input the value of power : 6

Expected Output :

The value of 2 to the power of 6 is : 64 */#include <stdio.h>
#include <stdlib.h>
int power(int a,int b);
int main()
{
    int a,b,p;
    printf("Enter the base value :");
    scanf("%d",&a);
    printf("Enter the power value :");
    scanf("%d",&b);
    p=power(a,b);
    printf("The value of power is:%d",p);
    return 0;
}
int power(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    return (a*power(a,b-1));
}
