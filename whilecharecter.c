#include<stdio.h>
#include<stdlib.h>
int main()
{
	char text[]="HAVE A NICE DAY";
	int i=0;
	while(text[i]!='\0')
	{
		printf("%c",text[i]);
		i++;
	}
}
