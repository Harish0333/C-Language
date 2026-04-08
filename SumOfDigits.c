#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("Enter the number to check sum of digits:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("sum of digits are: %d",sum);
	
	
	
	
}
