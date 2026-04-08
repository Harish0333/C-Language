#include<stdio.h>
void main()
{
	int *ptr1,*ptr2,*ptr3;
	int a=5,b=10,c;
	clrscr();
	ptr1=&b;
	ptr2=&a;
	c=ptr1-ptr2;
	printf("the ptr1 is :%d\n",ptr1);
	printf("the ptr2 is :%d\n",ptr2);
	printf("the answer is :%d",c);
	getch();
}
