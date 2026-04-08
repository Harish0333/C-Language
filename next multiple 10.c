#include<stdio.h>
int main()
{
	int number;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    int remainder = number % 10;
    int nextMultiple = number + (10 - remainder);
    int prevMultiple = number - remainder;
    int result = (remainder < 5) ? prevMultiple : nextMultiple;
    printf("The result is: %d\n", result);
    return 0;
}
