#include<stdio.h>
#include<stdlib.h>
int fun(void);
int a=10,b=5;
int main()
{  //effect of global variables on different fucntions
	printf("\nIn main() A=%d B=%d",a,b);
	a++;
	b--;
	printf("\nAgain In main() A=%d B=%d",a,b);
	fun();
}
int fun()
{
	a++;
	b--;
	printf("\nIn fun() A=%d B=%d",a,b);
}
