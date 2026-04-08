#include<stdio.h>
int  main()
{
	int n1,n2;
	printf("Enter two numbers to check maximum.\n");
	printf("frist number:");
	scanf("%d",&n1);
	printf("Second number:");
	scanf("%d",&n2);
	switch(n1>n2)
	{
		case 0:printf("Num %d is max",n2);
		break;
		
		case 1:printf("Num %d is max",n1);
		break;
		
		default:puts("Invalid");
	}
}
