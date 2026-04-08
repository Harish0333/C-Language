#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
	int num1;
	printf("Enter the Num1 :");
	scanf("%d",&num1);
	int result1=num1%10;
	int result2=num1/10;
	printf("Result:%d",result1+result2);
	return 0;
	
}
