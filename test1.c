#include<stdio.h>
int main()
{
	/*int i = 0;
    int x = i++, y = ++i;
    printf("%d % d\n", x, y);
    return 0;8
    
    int x = 4, y, z;
    y =  --x;
    z = x --;
    printf("%d%d%d", x,  y, z);
    
     int a = 5, b =  - 7, c = 0, d;
    d = ++a && ++b || ++c;
    printf("\n%d%d%d%d", a,  b, c, d);
    
    int a =  - 5;
    int k = (a++, ++a);
    printf("%d\n", k);
    
    int i = 2;
    int j = ++ i  + i;
    printf("%d\n", j);
   
    int a=5,b=6,c=0;
	c= a++ + ++b + b++ + ++a;
	printf(" a=%d, b=%d, c=%d",a,b,c);
	return 0;
		
	int a;
	a = 0, 1;
	printf("%d",a);
	return 0;

	int a = 2;
	a += a += a += 3;
	printf("%d",a);
	return 0;
	
	int x = 9+1.875;
	printf("%d",x);
	return 0;
	
	printf("%d",+0);
	return 0;

	int x = 15;
	int y = 2;
	int z = x / y + x % y;
	printf("z = %d\n", z);
	return 0;
	
	int a = 10;
	int b = 15;
	int c = a+++ b–;
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	return 0;
		
	int x = 9+1.875;
	printf("%d",x);
	return 0;
	
	float a = 45;
	printf("%f", a);
	return 0;
	
	int a = 5;
	int b = 10;
	int c = 15;
	int result = a++ * ++b - - -c;
	printf("result = %d\n", result);
	return 0;
	
	int x = 3;
	int y = 2;
	int z = x++ * (x + y) - y--;
	printf("z = %d\n", z);
	return 0;
	
	int x = 15;
	int y = 2;
	int z = x / y + x % y;
	printf("z = %d\n", z);
	return 0;
	
	int a = 10;
	int b = 20;
	int result = (a > b) && (b < a++) || (a++ < b);
	printf("result = %d\n", result);
	return 0;
	
	int a = 1, b = 2, c = 3;
	int result = a++ + ++b + c- - - - -c + ++a + b- - + a- - - b;
	printf("result = %d\n", result);
	return 0;
	
	int a = 10;
int b = 15;
int c = a+++b--;
printf("a = %d, b = %d, c = %d\n", a, b, c);
return 0;

int a = 10, b = 20, c = 10;
int result = (a > b) || (b == c) && (c != a);
printf("result = %d\n", result);
return 0;

int a = 5, b = 10, c = 15;
int result = !(a <= b) && !(b != c) && !(c >= a);
printf("result = %d\n", result);
return 0;
*/
//int a = 15, b = 4, c = 3;
//int result = (a + b) % c * b;
int a = 3;
int b = 4;
int result = (a += b) * (b -= 2);
printf("result = %d\n", result);
return 0;
}
