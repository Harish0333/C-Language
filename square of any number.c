#include <stdio.h>
/*Write a program in C to find the square of any number using the function.

Test Data :

Input any number for square : 20

Expected Output :

The square of 20 is : 400.00*/
// Function to calculate the square of a number
double square(double num) 
{
    return num*num;
}
int main()
{
    int i,r;
    printf("Enter any number for square:");
    scanf("%d",&i);
    r=square(i);
    printf("The square of %d is:%d",i,r);
    return 0;
}
