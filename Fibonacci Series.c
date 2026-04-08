/*Write a program in C to print the Fibonacci Series using recursion. >

Test Data :

Input number of terms for the Series (< 20) : 10

Expected Output:

 Input number of terms for the Series (< 20) : 10                                
 The Series are :                                                                
 1  1  2  3  5  8  13  21  34  55*/#include<stdio.h>
int term();
int main() 
{
   int num,i;
   printf("Enter the number of terms for the Series (< 20):");
   scanf("%d",&num);
   for(i=1;i<num+1;i++)
   {
       printf("%4d",term(i));
   }
}
int term(int i)
{
    if(i==0)
    {
        return 0;
    }
     else if(i==1)
    {
        return 1;
    }
    else
    {
        return term(i-1)+term(i-2);
    }
}
