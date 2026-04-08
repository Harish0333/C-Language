#include <stdio.h>
int sum (int a);
 /*Write a program in C to find the sum of digits of a number using recursion. >

Test Data :

Input any number to find sum of digits: 1234

Expected Output:

The Sum of digits of 1234 = 10 */
int main()
{
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
