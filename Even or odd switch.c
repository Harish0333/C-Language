#include<stdio.h>
int  main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	switch(n%2)
	{
		case0:puts("Even number");
		break;
		default:puts("Odd number");
	}
}
