/*Write a program in C to find the Factorial of a number using recursion.

Test Data :

Input a number : 5

Expected Output:

The Factorial of 5 is : 120*/#include<stdio.h>
int factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
int main()  
{  
  int number,fact;  
  printf("Enter a number: ");  
  scanf("%d", &number);   
  fact = factorial(number);  
  printf("Factorial of %d is:%d\n", number, fact);  
  return 0;  
}
