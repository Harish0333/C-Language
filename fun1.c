#include <stdio.h>
#include <stdlib.h>

/* 
void Add();

int main()
{
	Add();
	
}

void Add()
{
	printf("sum :%d\n",55+22);
	printf("Inside the func");
}
*/
void sum(int a ,int b)
{
int sum =a+b;
printf("sum %d\n",sum);
}

int main()
{
	sum(50,40);
	sum(50,400);
	sum(50,66);
}

