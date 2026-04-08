#include<stdio.h>
#include<stdlib.h>
int pass(int);
int main()
{ //wap to use the return statement in different ways.
	int x,y;
	printf("Enter value of x:");
	scanf("%d",&x);
	if(x==1 || x<0)
	return 0;
	y=pass(x);
	switch(y)
	{
	 case 1:
	 printf("The value returned is %d",y);
	 break;
	 default:
	 printf("The cube of %d is: %d",x,y);	
	}
	return 0;
}
int pass(a)
{
	if (a==0)
	return 0;
	else
	return(a*a*a);
	
}
