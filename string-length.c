#include<stdio.h>
#include<string.h>
int main()
{
	char text [20];
	int len;
	printf("Type text below:\n");
	gets(text);
	len=strlen(text);
	printf("length of the string:%d",len);
}
