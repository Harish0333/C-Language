// C Program To demonstrate sizeof operator
#include <stdio.h>
int main()
{
	char a='X';
	printf("%d\n", sizeof(a));//1
	printf("%d\n", sizeof("a"));//2
	printf("%d\n", sizeof(1));//4
	printf("%d\n", sizeof("1.23"));//2
	printf("%d\n", sizeof("abc"));//4
	printf("%d\n", sizeof("ab cd")+1);//6+1=7
	printf("%d\n", sizeof("abcd"+1));//8
	printf("abcd addr =%u\n","abcd");
	return 0;
}

