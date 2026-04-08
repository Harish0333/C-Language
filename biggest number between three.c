#include <stdio.h>
/*Write a C program to find the biggest number between three number using the function.

Test Data :

Input three positive number : 13 31 19

Expected Output :

The biggest number is 31.

*/
int MaxNum(int num1, int num2, int num3) 
{
    if(num1>num2 && num1>num3)
    {
        printf("The biggest number is %d",num1);
    }
    else if(num2>num1 && num2 >num3)
    {
        printf("The biggest number is %d",num2);
    }
    else
    {
        printf("The biggest number is %d",num3);
    }
    return 0;
}
int main()
{
    int i,j,k;
    printf("enter any three positive numbers:");
    scanf("%d %d %d",&i,&j,&k);
    if((i>=0)&&(j>=0)&&(k>=0))
    {
        MaxNum(i,j,k);
    }
    else puts("Enter a positive integer");
    return 0;
}
