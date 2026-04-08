#include<conio.h>
#include<stdio.h>
void main()
{
	int a[3][3],i,j,k=0;
	int *ptr;
	clrscr();
	ptr=a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		       //printf("a");
		       scanf("%d",ptr++);
		}
	}
	ptr=a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*ptr++);

		}
		printf("\n");
	}

	getch();
}

