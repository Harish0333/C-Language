#include<stdio.h>
#include<stdlib.h>
void main()
{
int no1,no2,temp,temp1,temp2;
printf("\n enter the two no decesending order ");
scanf("%d%d",&no1,&no2);
temp1=no1;
temp2=no2;
while(no2!=0)
{
temp=no1%no2;
no1=no2;
no2=temp;
}
if(no1==1)
printf("\n the %d and %d is co-prime",temp1,temp2);
else
printf("\n the %d and %d is not co-prime",temp1,temp2);
getch();
} 
