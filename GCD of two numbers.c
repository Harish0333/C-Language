#include<stdio.h>
/*Write a program in C to find the GCD of two numbers using recursion. 

Test Data :

Input 1st number: 10

Input 2nd number: 50

Expected Output :

The GCD of 10 and 50 is: 10 */
int hcf(int n1,int n2);
int main()
{
  int n1,n2;
  printf("Enter the first number:");
  scanf("%d",&n1);
  printf("Enter the second number:");
  scanf("%d",&n2);
  printf("The GCD of %d and %d is:%d",n1,n2,hcf(n1,n2));
  return 0;
}
int hcf(int n1,int n2)
{
    if(n2!=0)
    {
        return hcf(n2,n1%n2);
    }
    else
    {
        return n1;
    }
}
