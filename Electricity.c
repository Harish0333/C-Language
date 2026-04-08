#include<stdio.h>
#include<stdlib.h>
void main()
{
	int initial,final,consumed;
	float total;
	printf("initial & final:");
	scanf("%d %d",&initial, &final);
	consumed=final-initial;
	if(consumed>=200 && consumed<=500)
	total=consumed*3.50;
	else if(consumed>=100 && consumed<=199)
	total=consumed*2.50;
	else if(consumed<100)
	total=consumed*1.50;
	printf("total bill for %d unit is %f",consumed,total);
	}
