#include<stdio.h>
int x = 5;
int main() {

    int x = 9;
    {
        x = 4;
    }
    printf("%d", x);
return 0;
}
/*
int main()
{
    {
        int x = 8;
    }
    printf("%d",x);
}*/
//int a=0;
//int main()
/*{
int var = 010;

printf("%d", var);
}
*/

/*{
int x = 3;
{
int x = 4;
printf("%d", x);
}

{
char ch;
ch = 128;
printf("%d", ch);
return 0;
}

{
float x = 'a';
printf("%f", x);
return 0;
}
{
int p, q, r, s;
p = 1;
q = 2;
r = p, q;
s = (p, q);
printf("p=%d q=%d", p, q);
}
{
int a=1, b=2, c=3, d;
d = (a=c, b+=a, c=a+b+c);
printf("%d %d %d %d", d, a, b, c);
}
{
int a, b = 5, c;
a = 5 * (b++);
c = 5 * (++b);
printf("%d %d",a,c);
}
{
int a;
int b;
a = 6 + -16 + 16 + -6;
b = a + 1;
(a == b)?printf("%d %d",a,b):
printf("%u %u",a, b);
return 0;
}

{
int b;
a = 6 + -16 + 16 + -6;
b = a + 1;
(a == b)?printf("%d %d",a,b):
printf("%u %u",a, b);
return 0;
}
{
int x = 10;
float x = 10;
printf("%d", x);

return 0;
}
float x =1;
int main()
{
int x = 10;
x = 10;
printf("%d", x);

return 0;
}
float i=5.123;
int main()
{
int i;
i = 20;
printf("%d", sizeof(i));
return 0;
}
int p=5;
int q=9;
void main()
{
int p, q=1, r, s;
r = p, q;
s = (p, q);
printf("p=%d q=%d", r, s);
}
int main()
{
    int a = -5,b=8,c=10;
    int k=--a+(++b)- --c+ b--;
    printf("%d\n", k);
}
int main()
{
    int i = 0;
    int x = i++, y = ++i;
    printf("%d % d\n", x, y);
    return 0;
}
int x;
void main()
{

    printf("%d", x);
}
int y=89;
int main ( ) {
int y = 9;
y +=y+=y+3;
printf("%d",y);
return 0;
}
*\int main()
{
    int a = 10, b = 10;
     (a ==5)?printf("%d",b--):
    printf("%d, %d", a, b--);
}
