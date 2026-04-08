#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Even numbers between 10 to 1:\n");
	for (n=1;n<=100;n++)
	{
		if(n%2==1)
		continue;
		printf("%d",n);
	}
	return 0;
}
