#include <stdio.h>
/* run this program using the console pauser or add your own getch,
system("pause") or input loop */
int main()
{
	int a,b,c,d;
	a=b=c=2;
	d=a++ !=3 && ++b >=c++;
	printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);
	}
