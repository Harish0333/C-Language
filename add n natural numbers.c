#include <stdio.h>
/*Write a program in C to add n natural numbers using a function.

Test Data :

Input n value : 10

Expected Output :

The sum of 10 natural numbers is 55*/
// Function to calculate the sum of n natural numbers
int sumOfNaturalNumbers(int n) 
{
    int sum=(n*(n+1))/2; 
    printf("Sum of %d natural number is %d", n, sum);
    return 0;
}
int main()
{
    int n1 ;
    printf("Enter n value:");
    scanf("%d",&n1);
    sumOfNaturalNumbers(n1);
    return 0;
}
