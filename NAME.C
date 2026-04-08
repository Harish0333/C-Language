#include<conio.h>
#include<string.h>
#include<stdio.h>
struct bala
{
	char name[100];
}b[5];
void main()
{
	int i,j,num=0;
	char name1[100];
	clrscr();
	for(i=0;i<5;i++)
	{
		scanf("%s",&b[i].name);
	}
	printf("enter the name to be searched");
	scanf("%s",&name1);
	for(j=0;j<5;j++)
	{
	if(strcmp(b[j].name,name1)==0)
	{
		num++;
	}
	else
		num=0;
	}
	if(num==0)
		printf("not found");

	else
		printf("found %d times",num);

	getch();
}

