#include<stdio.h>
#include<stdlib.h>
int add(int,int);
void main()
{ //wap how user-defined function is called.
	int x=5,y=6,z;
	z=add(x,y);
	printf("z=%d",z);
}
int add(int a,int b)
{
	return(a+b);
}
