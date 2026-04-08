#include<stdio.h>
#include<stdlib.h>
int main()
{
	int j=0;
	void sqr(int);
	for(j=1;j<5;j++)
	sqr(j);
}
void sqr(int k)
{
	printf("\n%d",k*k);
}
