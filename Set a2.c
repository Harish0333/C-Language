#include<stdio.h>
int main()
{
	int lower,upper;
	char c;
	printf("Enter the character:");
	scanf("%c",&c);
	upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	if(c==lower||upper)puts("Vowel");
	else puts("Consosnants");
}
