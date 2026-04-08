#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	printf("enter the age of a person:");
	scanf("%d",&x);
	if(x<18)
	{printf("eligible for voting");}
	else
	{printf("not eligibl");}
}
