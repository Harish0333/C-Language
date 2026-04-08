#include<stdio.h>
int main()
{
int a = 1, b;
//clrscr();
b = a++ + a++ + a++;
//printf(“a=%d, b=%d\n”, a, b);
printf("a=%d,b=%d\n",a,b);
a = 1;
b = ++a + ++a + ++a;
//printf(“a=%d, b=%d”, a, b);
printf("a=%d,b=%d\n",a,b);
//getch();
return 0;
}
