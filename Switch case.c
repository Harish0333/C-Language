#include<stdio.h>
#include<stdlib.h>
int main()
{
	int marks;
	printf("marks:");
	scanf("%d",&marks);
	switch (marks)
	{
	case 90:
	printf("excellent");
	break;
	case 80:
	printf("very good");
	break;
	case 70:
	printf("good");
	break;
	case 60:
	printf("average");
	break;
	default:	{
	printf("fail");}
}	
}
