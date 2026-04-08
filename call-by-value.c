#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y,change (int,int);
	printf("\nEnter the values of X & y :");
	scanf("%d %d",&x,&y);
	change (x,y);
	printf("In main() X=%d Y=%d",x,y);
}
change (int a,int b)
{
	int k;
	k=a;
	a=b;
	b=k;
	printf("In change() X=%d Y=%d",a,b);
	
}
