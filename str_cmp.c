#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(const char* s1,const char* s2) 
{
	s1="abc";
	s2="abce";
	if(strcmp(s1,s2)<0)
	printf("S1 is lesser than s2");
	else
	printf("s2 is greater than s1");
	return 0;
}
