#include<stdio.h>
/*addition of two numbers without using arithematic operators*/
int main()
{
	int num1,num2,i;
	printf("Enter the Num1 :");
	scanf("%d",&num1);
	printf("Enter the Num2 :");
	scanf("%d",&num2);
	for(i=0;i<num2;i++)
	{
		num1++;
	}
	printf("Addition of both the numbers are:%d",num1);
}
