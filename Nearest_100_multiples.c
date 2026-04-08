#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a<500)
	{
		if(a<100)
		{
			printf("Nearer number is 100");
		}
		else if(a<200)
		{
			printf("Nearer number is 200");
		}
		else if(a<300)
		{
			printf("Nearer number is 300");
		}
		else if(a<400)
		{
			printf("Nearer number is 400");
		}
			else if(a<500)
		{
			printf("Nearer number is 500");
		}
		//printf("Done");
	}
	else if(a>500)
	{
		if(a>500 && a<600)
		{
			printf("Nearer number is 600");
		}
		else if(a>600 && a<700)
		{
			printf("Nearer number is 700");
		}
		else if(a>700 && a<800)
		{
			printf("Nearer number is 800");
		}
		else if (a>800 && a<900)
		{
			printf("Nearest number is 900");
		}
		else if(a<900 && a<1000)
		{
			printf("Nearer number is 1000");
		}
		
//	printf("Error");
	}
	
}
