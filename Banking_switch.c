#include<stdio.h>
int main()
{
float amt,bal=2000;
char t;
printf("Welcome to the national bank CDM:\n");
printf("Enter which type of transaction you want:\n");
printf("W for Withdraw & D for deposit:");
scanf("%c",&t);
switch(t)
{
	case 'W':case 'w':
		printf("Balance available :%.2f",bal);
		printf("\nHow much money wants to withdraw:");
		scanf("%f",&amt);
		if(amt>bal)
		{
			printf("Invalid Amount:");
		}
		else if(amt<=0)puts("Invalid amount");
		
		else{
				bal=bal-amt;
			printf("Balance available :%.2f",bal);
		}
		break;
		
	case 'D':case 'd':
		printf("Enter amount to deposit :");
		scanf("%f",&amt);
		if(amt<=0)puts("Amount cant be stored");
		else
		{
		bal=amt+bal;
		printf("Amount has be deposited total is %.2f",bal);	
		}
		break;
	default:puts("Invalid Entry");
	}	
}
