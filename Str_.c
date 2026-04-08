#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{char *fruits[] ={"2 apples","3 Bannanas","4 Oranges","5 Berries"};
if (strcmp(fruits[1],fruits[2])<0)
{
	printf("%s string is less than %s",fruits[1],fruits[2]);
}
else
{
	printf("%s string is greater than %s",fruits[1],fruits[2]);
}
return 0;
}
