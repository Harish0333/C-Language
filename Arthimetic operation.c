#include<stdio.h>
int  main()
{
	int n1,n2;
	char ch;
	printf("Enter number1:");
	scanf("%d",&n1);
	printf("Enter number2:");
	scanf("%d",&n2);
	printf("Enter Operation (+ or - or / or *):");
	getchar();
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
		printf("Addition is:%d",n1+n2);
		break;

		case '-':
		printf("Subraction is:%d",n1-n2);
		break;
		
		case '*':
		printf("Multiplication is:%d",n1*n2);
		break;
		
		case '/':
		printf("Division is:%d",n1/n2);
		break;
		
		default:puts("Invalid");	}
}
