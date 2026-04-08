#include<conio.h>
#include<stdio.h>
void main()
{
	char ch[10];
	int count=0;
	int i,vow=0,constant=0;
	clrscr();
	printf("enter the string: ");
	gets(ch);
	count=strlen(ch);
	for(i=0;i<count;i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
		vow++;
		else
		constant++;
	}
	printf("the number of vowels are: %d \n",vow);
	printf("the number of consonants are: %d ",constant);
	getch();
}