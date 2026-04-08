#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	char ch[100];
	int count=0;
	int i,vow=0,constant=0;
	char *ptr;
	clrscr();
	printf("enter the string: ");
	gets(ch);
	count=strlen(ch);
	ptr=&ch[0];
	for(i=0;i<count;i++)
	{
		if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
		vow++;
		else
		constant++;
		ptr++;
	}
	printf("the number of vowels are: %d \n",vow);
	printf("the number of consonants are: %d ",constant);
	getch();
}