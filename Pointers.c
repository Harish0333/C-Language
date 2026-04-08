#include <stdio.h>
/* run this program using the console pauser or add your own getch,
system("pause") or input loop */
int main()
{
	int a; //intialization
	a=100;//declaration
	int *p;//pointer
	p=&a;//pointer asssigning to value
	printf("value of a %d\n",a);
	printf("Address of a %u\n",&a);
	printf("P value %u",p);
}
