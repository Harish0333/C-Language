#include<stdio.h>
#include<stdlib.h>       //WAP to show how user-defined function is called.
int add(int,int);    //function protype
void main()
{
	int x=2,y=3,z;
	z=add(x,y);     //function call
	printf("%d",z);
}
//function definition
int add(int a,int b) //formal arguements
{
 	return(a+b);
}
