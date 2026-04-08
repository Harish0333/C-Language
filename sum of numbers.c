/*Write a program in C to calculate the sum of numbers from 1 to n using recursion.

Test Data :

Input the last number of the range starting from 1 : 5

Expected Output:

The sum of numbers from 1 to 5 : 
15*/#include<stdio.h>
int sum(int y);
int main() 
{
    int j;
    printf("Enter the last number of the range starting from 1:");
    scanf("%d",&j);
    sum(j);
    printf("The Sum of numbers from 1 to %d:\n%d",j,sum(j));
    return 0;
}
int sum(int n)
{
    if(n>0)
    {
        return n+sum(n-1);
    }
    else
    {
        return 0;
    }
}
