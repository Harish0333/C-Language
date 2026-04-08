#include<stdio.h>
#include<stdlib.h>
int main()
{
	int month;
	float amount,value,inrate;//,PERIOD,PRINCIPAL;
	/**assignment starts**/
	amount = 40000;//RINCIPAL;
	inrate = 7.0;
	month   = 1;
	while(month<=12)//PERIOD
	{
		printf("%2d %8.2f\n",month,amount);
		value=amount+inrate*amount;
		month = month+1;
		amount=value;
	}
	return (0);
}
