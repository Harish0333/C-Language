#include<stdio.h>
int  main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:puts("31 days");
		break;
		case 2:puts("28 or 29 days");
		break;
		case 4:case 6:case 9:case 11:puts("30 days");
		break;
		default:puts("Not nvalid");
	}
}
