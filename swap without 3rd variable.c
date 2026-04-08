#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter A value:");
	scanf("%d",&a);
	printf("Enter B value:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping\n");
	printf("A value: %d\n",a);
	printf("B value: %d",b);
}
