#include<stdio.h>
int  main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
if(ch=='A'&&ch=='z')ch+=32;
{
	switch(ch)
	{
		case 'a':case 'e':case 'i':case 'o':case 'u':puts("Its an vowel.");
		break;
		default:puts("Its a Consonant.");
	}
}
else puts("invalid");
}
