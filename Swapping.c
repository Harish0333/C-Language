#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the value of first variable:");
	scanf("%d",&a);
	printf("Enter the value of Second variable:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping\n");
	printf("first varaiable value is %d\n",a);
	printf("second varaiable value is %d",b);
}
	
	
