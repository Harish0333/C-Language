#include<stdio.h>
#include<stdlib.h>             //	WAP to define user-defined function.call them in different places.
void y();//function prototype
void y()
{
	printf("Y"); //function call
}
void main()
{
	void a(),b(),c(),d(); //function definition
	y();
	a();
	b();
	c();
	d();
}
void a()
{
	printf("A");
	y();
}
void b()
{
	printf("B");
	a();
}
void c()
{
	a();
	b();
	printf("C");
}
void d()
{
	printf("D");
	c();
	b();
	a();
}



