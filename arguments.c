#include<stdio.h>
#include<stdlib.h>
void main()
{//--WAP to pass date,month and year as parameters to user-defined function and 
//--display the day in the formatdd/mm/yy
	int dat(int,int,int);
	int d,m,y;
	printf("\nEnter the Date:dd/mm/yy=");
	scanf("%d%d%d",&d,&m,&y);
	dat(d,m,y);	
}
int dat(int a,int b,int c)
{
	printf("\nDate :%d/%d/%d",a,b,c);
	return 0;
}
