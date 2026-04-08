/*Write a program in C to print the using recursion.

Expected Output:

 The natural numbers are : 1  2  3
  4  5  6  7  8  9  10  11  12  13
  14  15  16  17  18  19  20  21  
22  23  24  25  26  27  28  29  30
  31  32  33  34  35  36  37  38  
39  40  41  42  43  44  45  46  47
  48  49  50 
*/#include<stdio.h>
void printNaturalNumbers(int lowerLimit, int upperLimit);
int main()
{
   int low,upp;    
    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &upp);
    printf("The natural numbers are:");
    printNaturalNumbers(low,upp);
    return 0;
}
void printNaturalNumbers(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
    {
        return;
    }
    printf("%4d",lowerLimit);
    printNaturalNumbers(lowerLimit + 1, upperLimit);
}
