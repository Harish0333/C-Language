#include<stdio.h>
int main()
{	
	int ur,ps;
	printf("Enter the user id:");
	scanf("%d",&ur);
	switch(ur)
	{
		case 1001:
		printf("Enter password:");
		scanf("%d",&ps);
			switch(ps)
			{
				case 1010:
				printf("Welcome Harish !!!");
				break;
				default:puts("Inncorrect password.");
			}
		break;
		default:puts("Inncorrect user ID");
	}
	return 0;
}
