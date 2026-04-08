#include <stdio.h>
/*Write a program in C to swap two numbers using a function.

Test Data :

Input 1st number : 2

Input 2nd number : 4

Expected Output :



Before swapping: n1 = 2, n2 = 4                          

After swapping: n1 = 4, n2 = 2 */
// Function to swap two numbers
int swap(int num1, int num2) 
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("n1=%d,n2=%d",num1,num2);
    return 0;
}

int main()
{
    int n1,n2;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter Second number:");
    scanf("%d",&n2);
    printf("Before swapping:n1=%d,n2=%d\n",n1,n2);
    printf("After swapping:");
    swap(n1,n2);
    return 0;
}
