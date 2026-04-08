#include <stdio.h>
/*Write a program in C to check if a given number is even or odd using the function.

Test Data :

Input any number : 5

Expected Output :

The entered number is odd. */
int isEven(int num)
{
    return ((num%2)==0);
}
int main()
{   
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(isEven(number))
    {
        printf("The entered number is Even");
    }
    else puts("The entered number is Odd");
    return 0;
}
