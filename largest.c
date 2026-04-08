#include<stdio.h>
#include<stdlib.h>
void main()
{
	int x,y,z;
	printf("enter 3 num x,y,z:");
	scanf("%d%d%d",&x,&y,&z);
	printf("\n largest");
	if(x>y)
	{
		if(x>z)
		printf("x=%d",&x);
		else
		printf("z=%d",&z);
	}
	else
	{
		if(z>y)
		printf("z=%d",z);
		else
		printf("y=%d",y);
	}
}
