#include <stdio.h>
/* run this program using the console pauser or add your own getch,
system("pause") or input loop */
int main()
{
int a=20;
a=a++/2;
printf("a=%d\n",a);//Ans 11
a=++a/2;
printf("a=%d\n",a);//Ans 6
return 0;
}
