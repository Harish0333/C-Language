#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,c;
	
	printf("Enter the first number to find greatest:\n");
	scanf("%d",&a);
	
	printf("Enter the second number to find greatest:\n");
	scanf("%d",&b);
	
 	c = (a>b)? a : b;
 	
	printf("the greatest is %d",c);
	
	return 0;
}
