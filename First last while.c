#include <stdio.h>
int main()
{
     int n, first_digit,last_digit;
     printf("Enter the Number :--> ");
     scanf("%d", &n);
     last_digit = n % 10;  //last digit of a number
     while(n > 0)
     {
          first_digit = n % 10;  //first digit of a number
          n = n / 10;
     }
     printf("The first digit of the number is : %d",first_digit);
     printf("\nThe last digit of the number id : %d",last_digit);
     return 0;
 }
