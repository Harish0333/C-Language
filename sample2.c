#include<stdio.h>
int main()
/*{
	int a=3,b=10,c=15;
	int result=a++ * ++b - --c;
	printf("Result=%d\n",result);
	return 0;
}
{
int x=3,y=2;
int z=x++ *(x+y)-y--;
printf("z=%d\n",z);
}
{
	int x=10,y=5;
	int z=x- --y;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
}
{
int x=3,y=2;
int z=x++*(x+y)- --y;
printf("z=%d\n",z);
return 0;
}
{
	int x=15,y=2;
	int z=x/y+x%y;
	printf("z=%d\n",z);
	return 0;
}
{
	int a=10,b=20;
	int result=(a>b)&&(b<a++)||(a++<b);
	printf("result=%d\n",result);
	return 0;
}
{
	int a=1,b=2,c=3;
	int result=a++ + ++b+c-- - --c+ ++a+b--+a---b;
	printf("result=%d\n",result);
	return 0;
}
{
	int a=10,b=15;
	int c=a++ +b--;
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	return 0;
}
{
int a=10,b=20,c=10;
int result=(a>b)||(b==c)&&(c!=a);
printf("result=%d\n",result);
return 0;
}
{
int a=5,b=10,c=15;
int result=!(a<=b)&&!(b!=c)&&!(c>=a);
printf("result=%d\n",result);
return 0;
}
{
int a=15,b=4,c=3;
int result =(a+b)%c*b;
printf("result=%d\n",result);
return 0;
}
{
int a = 3;
int b = 4;
int result = (a += b) * (b -= 2);
//printf(“result = %d\n”, result);
printf("result=%d\n",result);
return 0;
}
{
float result=3/2;
printf("result=%f\n",result);	
}
{
int x = 5;
float y = 3.5;
int result = x + (int)y;
printf("result=%d\n",result);
return 0;
}
 {
int x = 5;
int y = 3;
x += y++;
y -= x--;
//printf(“x = %d, y = %d\n”, x, y);
printf("x=%d,y=%d\n",x,y);
return 0;
}
 {
int x = 5;
int y = 2;
int z = (x > y) ? (x += y) : (x -= y);
//printf(“z = %d\n”, z);
printf("z=%d\n",z);
return 0;
}
{
	//int a=7;
	//int b=3;
	//int result=a-->b++?a:b;
	printf("%d\n%d\n%d",-5/2,5/-2,-5/-2);
	return 0;
}
{
	float a=7.5;
	int b=2;
	float result=a/b;
	printf("Result %f",result);
	return 0;
}
 {
int n = 123;
//clrscr();
//printf(“%d”, n % 10);
printf("%d",n%10);
n = n / 10;
//printf(“%d %d”, n % 10, n / 10);
printf("%d%d",n%10,n/10);
//getch();
}
{
printf("%d ", 2 + 3 * 4 + 5 == 45);
printf("%d ", 2 + 3 * 4 + 5 == 19);
printf("%d ", (2 + 3) * (4 + 5) == 45);
}
{
int a = 1, b = 4, c = 10;
//clrscr();
c = a = 10 == b + 6;
//printf(“a=%d, b=%d, c=%d”, a, b, c);
printf("a=%d,b=%d,c=%d",a,b,c);//getch();
}
{
float fmod;
//printf("%d",5&&3);
printf("%f",fmod(5.0,2.0));
printf("%f",fmod(5,2.0));
//printf("%d",0||-3);
return 0;	
}*/
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
