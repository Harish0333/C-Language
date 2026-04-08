#include <stdio.h>
/*Write a program in C to check whether a number is a prime number or not by using the function.

Test Data :

Input a positive number : 5

Expected Output :

The number 5 is a prime number.*/
#include <stdbool.h>
bool CheckPrime(int num) 
{
    //Write Your Code Here...
    int c;
    for(c=2;c<num-1;c++)
    { 
      if ( num%c == 0 )
      {
        return false;
      }
      else
      {
        return true;
      }
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a positive number:");
    scanf("%d",&n);
   // CheckPrime(n);
    if(CheckPrime(n))
    {
        printf("Prime");
    }
    else
    {
        printf("Not a prime");
    }
    return 0;
}
