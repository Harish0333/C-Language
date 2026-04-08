#include <stdio.h>
/*Amicable Numbers:

Write a program to find and display all pairs of amicable numbers within a given range, by using different user defined functions.

Amicable numbers are pairs of numbers where the sum of the proper divisors of one number is equal to the other number.

Example : 

-> a = 220



  The divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, and 110 excluding itself.

  The sum of these divisors is 284: 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284.



-> b = 284



  The divisors of 284 are 1, 2, 4, 71, and 142 excluding itself.

  The sum of these divisors is 220: 1 + 2 + 4 + 71 + 142 = 220.



So, (220, 284) is a pair of amicable numbers.

Amicable pairs between 100 and 10000 are:

(220, 284)

(284, 220)

(1184, 1210)

(1210, 1184)

(2620, 2924)

(2924, 2620)

(5020, 5564)

(5564, 5020)

(6232, 6368)

(6368, 6232)*/
int sumOfDivisors(int num) 
{
    int sum = 1;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) {
            sum += i;
            if (i != (num / i)) {
                sum += (num / i);
            }
        }
    }
    return sum;
}
int areAmicable(int num1, int num2) 
{
    int sum1 = sumOfDivisors(num1);
    int sum2 = sumOfDivisors(num2);
    return (sum1 == num2 && sum2 == num1 && num1 != num2);
}

int main() 
{
    int start, end;
    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);
    printf("Amicable pairs between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (areAmicable(i, j))
            {
                printf("(%d, %d)\n", i, j);
            }
        }
    }
    return 0;
}
