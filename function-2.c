#include<stdio.h>
#include<stdlib.h> // WAP to show variable names can be used in different functions.
void fun (void);         //function prototype 
void main()
{
	int b=5,c=10;             //function call
	printf("\n In main B=%d C=%d",b,c);
	fun();
}
void fun()
{                             //function definition
	int b=10,c=55;          //formal arguements
	printf("\n In fun B=%d C=%d",b,c);
} 
