#include<stdio.h>
 main()
{
	int *p;
	int a[5]={1,2,3,4,5};
	int i;

	p=&a[4];
	for(i=0;i<5;i++)
	{
		printf("the numbers in the array:%d\n",*p);
		p--;
	}

}
