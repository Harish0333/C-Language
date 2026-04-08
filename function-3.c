#include<stdio.h>
#include<stdlib.h>
void fun(void);
int a=22,b=33;            //WAP to show the effect of global variables on different functions.
void main()
{
	printf("\n In main A=%d B=%d",a,b);
	fun();
	a++;
	b--;	
	printf("\n Again in main A=%d B=%d",a,b);
}
void fun()
{
	a++;
	b--;
	printf("\n In fun A=%d B=%d",a,b);
}
