#include <stdio.h>
/* run this program using the console pauser or add your own getch,
system("pause") or input loop */
int main()
{
int a=20;

printf("a=%d\n",a++/2);//Ans 10 priority /,a++=21

printf("a=%d\n",++a/2);//Ans 11 22/2=11

printf("a=%d\n",a);//Ans 22
//return 0;
}
