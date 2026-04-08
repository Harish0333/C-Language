#include<stdio.h>
int main()
{
	int a;
	printf("Enter A value:");
	scanf("%d",&a);
	int result=a%100;
	result=a+(100-result);
	printf("Result:%d",result);
	return 0;
}
