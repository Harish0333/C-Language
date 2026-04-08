#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	int i;
	printf("enter a number:");
	scanf("%d", &number);
	{
		for(i=1;i<=10;i++)
		{
		printf("%d\n",(number*i));	
		}
		getch();
    }
}
	
