#include<stdio.h>
#include<stdlib.h>
void main()
{
	for(;;)
	call();
}
call()
{
	int static m;
	m++;
	printf("\n m=%d",m);
	if (m==3)
	return 0;
}
