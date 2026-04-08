#include<stdio.h>
int main()
{	
	int s1,s2;
	char p1[10],p2[10];

	printf("Enter the first person name:");
	scanf("%s",&p1);
	getchar();
	printf("Enter the score of first person:");
	scanf("%d",&s1);
	getchar();
	printf("Enter the Second person name:");
	scanf("%s",&p2);
	printf("Enter the score of Second person:");
	scanf("%d",&s2);
	
	switch(s1>s2)
	{
		case 0:
		printf("%s score more than %s by %d points",p2,p1,s2-s1);
		break;
			  
		case 1:
		printf("%s score more than %s by %d points",p1,p2,s1-s2);
		break;
		
		default:puts("Invalid");
	}
	
	
}

