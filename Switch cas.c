#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int marks;
	printf("enter the marks:");\
	scanf("%d",&marks);
	
	switch(marks){
		case (90):
			printf("Execellent");
			break;
			case 75:
				printf("very good");
				break;
				case 50:
					printf("good");
					break;
						
					default:
		printf("Result pending");
					
	}

	
	return 0;
}
