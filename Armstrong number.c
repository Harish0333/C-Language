#include <stdio.h>
#include <math.h>
/*Write a C program to find all the Armstrong number in beetween 100 to 10000 by using 2 different 

user defined function and one main function to display all the Armstrong number in the given range.

Armstrong number Example : 

153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

Armstrong numbers between 100 and 10000 are:

153

370

371

407

1634

8208

9474*/
int power(int base, int exponent) 
{
   int result = 1;
    for (int i = 0; i < exponent; i++) 
    {
        result *= base;
    }
    return result;
}
int isArmstrong(int num) 
{
   int originalNum = num;
    int numDigits = 0;
    int sum = 0;
    while (num != 0) {
        num /= 10;
        numDigits++;
    }
    num = originalNum;
    while (num != 0) 
    {
        int digit = num % 10;
        sum += power(digit, numDigits);
        num /= 10;
    }
    return (sum == originalNum);
}
int main() 
{
    
    int start = 100;
    int end = 10000;
    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) 
    {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
return 0;
}
